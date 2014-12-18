// (c) 2014 Sten Verbois
// This code is licensed under MIT license
// (see LICENSE.txt at https://github.com/stenverbois/compactxml/blob/master/LICENSE.txt for details)

#include "compactxml.h"

namespace CXml {

XMLDocument::XMLDocument() {
	ti_document = new tinyxml2::XMLDocument(true, tinyxml2::Whitespace::COLLAPSE_WHITESPACE);
}

std::string XMLDocument::documentName() const {
    return document_file_name;
}

XMLElement XMLDocument::root() {
    return XMLElement(ti_document->RootElement());
}

std::string  XMLDocument::errorDesc() {
    return error_desc;
}

bool XMLDocument::loadFile(std::string file_name) {
    document_file_name = file_name;

    if(ti_document->LoadFile(file_name.c_str()))
    {
        std::stringstream ss;
        ss << "TinyXML2 errorID (" << ti_document->ErrorID() << "): " << tinyXMLErrorIDs[ti_document->ErrorID()] << std::endl;
        ss <<  "TinyXML2 description: " << ti_document->GetErrorStr1() << std::endl;
        error_desc = ss.str();
        return false;
    }

    tinyxml2::XMLElement* ti_root = ti_document->RootElement();

    if(!ti_root) {
    	ti_document->Clear();
        return false;
    }

    return true;
}

std::string XMLDocument::writeElement(XMLElement element, std::string indent) {
    std::stringstream ss;
    ss << indent << "<" << element.name();
    for(auto& attr : element.getAttributes()) {
        ss << " " << attr.name() << "=\"" << attr.value() << "\"";
    }
    ss << ">";
    if(element.getChildren().size() != 0) {
        ss << "\n";
        for(auto& child : element.getChildren()) {
            ss << writeElement(child, indent + "  ");
        }
        ss << indent;
    }
    else {
        ss << element.value();
    }
    ss << "</" << element.name() << ">\n";

    return ss.str();
}

XMLDocument::~XMLDocument() {
	delete ti_document;
}

tinyxml2::XMLDocument* XMLDocument::getTinyxml2Document() {
	return ti_document;
}

bool XMLDocument::writeFile(std::string file_name) {
    std::string file_to_save = file_name.empty() ? this->document_file_name : file_name;

    // std::ofstream ofs;
    // ofs.open(file_to_save);
    // ofs << writeElement(root());

    //TinyXML
    ti_document->SaveFile(file_to_save.c_str());

    return 0;
}

XMLElement::XMLElement() : ti_element(nullptr) {}
XMLElement::XMLElement(tinyxml2::XMLElement* ti_element) : ti_element(ti_element) {}

std::string XMLElement::name() const {
    return ti_element == nullptr ? "*nonexistent_element*" : ti_element->Value();
}
std::string XMLElement::value(std::string def) const {
	if(ti_element == nullptr) {
		return def;
	}

	if(ti_element->GetText())
		return std::string(ti_element->GetText());
	else
		return "";
}
double XMLElement::valueAsDouble(double def) const {
    return ti_element == nullptr ? def : std::atof(value().c_str());
}
int XMLElement::valueAsInt(int def) const {
    return ti_element == nullptr ? def : std::atoi(value().c_str());
}
bool XMLElement::valueAsBool(bool def) const {
	if(ti_element == nullptr) {
		return def;
	}

    bool return_bool = false;
    if(value() == "1")
        return_bool = true;
    else {
        std::string str = value();
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        if(str == "true")
            return_bool = true;
    }

    return return_bool;
}

std::vector<XMLElement> XMLElement::getChildren() {
    std::vector<XMLElement> child_vector;
    for(tinyxml2::XMLNode* child = ti_element->FirstChildElement(); child; child = child->NextSiblingElement()) {
    	child_vector.push_back(XMLElement(child->ToElement()));
     }

    return child_vector;
}
std::vector<XMLElement> XMLElement::getChildren(std::string name) {
    std::vector<XMLElement> child_vector;
    for(auto& child : getChildren()) {
        if(child.name() == name) {
            child_vector.push_back(child);
        }
    }

    return child_vector;
}

XMLElement XMLElement::getChild(std::string name) {
    for(auto& child : getChildren()) {
        if(child.name() == name) {
            return child;
        }
    }

    //std::cerr << "CompactXML Error: no child with name '" << name << "' when calling \"getFirstChild\"" << std::endl;
    return XMLElement();
}

bool XMLElement::attributeExists(std::string name) {
	return ti_element->Attribute(name.c_str()) != 0;
}

bool XMLElement::childExists(std::string name) {
	for(XMLElement child : getChildren()) {
		if(child.name() == name) {
			return true;
		}
	}
	return false;
}

XMLAttribute XMLElement::getAttribute(std::string name) {
	const tinyxml2::XMLAttribute* current_attribute = ti_element->FirstAttribute();
	while(current_attribute) {
		if(current_attribute->Name() == name) {
			return XMLAttribute(current_attribute, ti_element);
		}
		current_attribute = current_attribute->Next();
	}

	//std::cerr << "CompactXML Error: no attribute with name '" << name << "' when calling \"getAttribute\"" << std::endl;
    return XMLAttribute();
}

std::vector<XMLAttribute> XMLElement::getAttributes() {
    std::vector<XMLAttribute> attribute_vector;

    const tinyxml2::XMLAttribute* current_attribute = ti_element->FirstAttribute();
    while(current_attribute) {
    	attribute_vector.push_back(XMLAttribute(current_attribute, ti_element));

        current_attribute = current_attribute->Next();
    }

    return attribute_vector;
}

void XMLElement::setValue(std::string value) {
    ti_element->SetText(value.c_str());
}
void XMLElement::setValue(int value) {
    ti_element->SetText(value);
}
void XMLElement::setValue(double value) {
    ti_element->SetText(value);
}
void XMLElement::setValue(bool value) {
    ti_element->SetText(value);
}

void XMLElement::addChild(std::string name, std::string value) {
	tinyxml2::XMLElement* new_element = ti_element->GetDocument()->NewElement(name.c_str());
	new_element->SetText(value.c_str());
	ti_element->InsertEndChild(new_element);
}

void XMLElement::addChild(std::string name, int value) {
    std::stringstream ss;
    ss << value;
    addChild(name, ss.str());
}

void XMLElement::addChild(std::string name, double value) {
    std::stringstream ss;
    ss << value;
    addChild(name, ss.str());
}

void XMLElement::addChild(std::string name, bool value) {
    addChild(name, value ? "true" : "false");
}

void XMLElement::removeChildren() {
	ti_element->DeleteChildren();
}

void XMLElement::removeChildren(std::string name) {
	for(XMLElement& el : getChildren(name)) {
		removeChild(el);
	}
}

void XMLElement::removeChild(XMLElement child) {
	for(XMLElement& el : getChildren()) {
		if(el.ti_element == child.ti_element) {
			ti_element->DeleteChild(el.ti_element);
		}
	}
}

void XMLElement::setAttribute(std::string name, std::string value) {
	ti_element->SetAttribute(name.c_str(), value.c_str());
}

void XMLElement::setAttribute(std::string name, int value) {
	ti_element->SetAttribute(name.c_str(), value);
}

void XMLElement::setAttribute(std::string name, double value) {
	ti_element->SetAttribute(name.c_str(), value);
}

void XMLElement::setAttribute(std::string name, bool value) {
	ti_element->SetAttribute(name.c_str(), value);
}


XMLAttribute::XMLAttribute() : ti_attribute(nullptr), ti_attr_element(nullptr) {}
XMLAttribute::XMLAttribute(const tinyxml2::XMLAttribute* ti_attribute, tinyxml2::XMLElement* ti_attr_element)
	: ti_attribute(ti_attribute), ti_attr_element(ti_attr_element) {}

std::string XMLAttribute::name() const {
    return std::string(ti_attribute->Name());
}
std::string XMLAttribute::value(std::string def) const {
	if(ti_attribute == nullptr) {
		return def;
	}

    if(!std::string(ti_attribute->Value()).empty())
        return std::string(ti_attribute->Value());
    else
        return "";

}
double XMLAttribute::valueAsDouble(double def) const {
    return ti_attribute == nullptr ? def : ti_attribute->DoubleValue();
}
int XMLAttribute::valueAsInt(int def) const {
    return ti_attribute == nullptr ? def : ti_attribute->IntValue();
}
bool XMLAttribute::valueAsBool(bool def) const {
	return ti_attribute == nullptr ? def : ti_attribute->BoolValue();
}

void XMLAttribute::setValue(const char* value) {
	ti_attr_element->SetAttribute(name().c_str(), value);
}
void XMLAttribute::setValue(std::string value) {
    ti_attr_element->SetAttribute(name().c_str(), value.c_str());
}
void XMLAttribute::setValue(int value) {
    ti_attr_element->SetAttribute(name().c_str(), value);
}
void XMLAttribute::setValue(double value) {
    ti_attr_element->SetAttribute(name().c_str(), value);
}
void XMLAttribute::setValue(bool value) {
    ti_attr_element->SetAttribute(name().c_str(), value);
}

}
