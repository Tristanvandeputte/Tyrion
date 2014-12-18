// (c) 2014 Sten Verbois
// This code is licensed under MIT license
// (see LICENSE.txt at https://github.com/StenVerbois/compactxml/blob/master/LICENSE.txt for details)

#ifndef SIMPLEXML_H_
#define SIMPLEXML_H_

#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "tinyxml2.h"

namespace CXml {

const std::string tinyXMLErrorIDs[20] = {
    "XML_NO_ERROR",

    "XML_NO_ATTRIBUTE",
    "XML_WRONG_ATTRIBUTE_TYPE",

    "XML_ERROR_FILE_NOT_FOUND",
    "XML_ERROR_FILE_COULD_NOT_BE_OPENED",
    "XML_ERROR_FILE_READ_ERROR",
    "XML_ERROR_ELEMENT_MISMATCH",
    "XML_ERROR_PARSING_ELEMENT",
    "XML_ERROR_PARSING_ATTRIBUTE",
    "XML_ERROR_IDENTIFYING_TAG",
    "XML_ERROR_PARSING_TEXT",
    "XML_ERROR_PARSING_CDATA",
    "XML_ERROR_PARSING_COMMENT",
    "XML_ERROR_PARSING_DECLARATION",
    "XML_ERROR_PARSING_UNKNOWN",
    "XML_ERROR_EMPTY_DOCUMENT",
    "XML_ERROR_MISMATCHED_ELEMENT",
    "XML_ERROR_PARSING",

    "XML_CAN_NOT_CONVERT_TEXT",
    "XML_NO_TEXT_NODE"
};
/*
 * @brief Class representing an xml attribute.
 */
class XMLAttribute {
private:
    const tinyxml2::XMLAttribute* ti_attribute;
    tinyxml2::XMLElement* ti_attr_element;

    friend class XMLDocument;
    friend class XMLElement;

public:
    /**
     * @brief Default constructor.
     */
    XMLAttribute();

    /**
     * @brief Constructor.
     */
    XMLAttribute(const tinyxml2::XMLAttribute* ti_attribute, tinyxml2::XMLElement* ti_attr_element);

    /**
     * @brief Get the name of this attribute.
     */
    std::string name() const;

    /**
     * @brief Get the value of this attribute as string.
     * Returns an empty string when the attribute does not contain any text.
     * @param def Optional value to be returned when the attribute does not exist (default: "*nonexistent_attribute*").
     */
    std::string value(std::string def = "*nonexistent_attribute*") const;

    /**
     * @brief Get the value of this attribute as double.
     * @param def Optional value to be returned when the attribute does not exist (default: 0.0).
     */
    double valueAsDouble(double def = 0.0) const;

    /**
     * @brief Get the value of this attribute as int.
     * @param def Optional value to be returned when the attribute does not exist (default: 0).
     */
    int valueAsInt(int def = 0) const;

    /**
     * @brief Get the value of this attribute as bool.
     * @param def Optional value to be returned when the attribute does not exist (default: false).
     */
    bool valueAsBool(bool def = false) const;

    /**
     * @brief Set the value of this attribute.
     * @param value The new value of this attribute as string.
     */
    void setValue(std::string value);

    /**
     * @brief Set the value of this attribute.
     * @param value The new value of this attribute as c-style string.
     */
    void setValue(const char* value);

    /**
     * @brief Set the value of this attribute.
     * @param value The new value of this attribute as int.
     */
    void setValue(int value);

    /**
     * @brief Set the value of this attribute.
     * @param value The new value of this attribute as double.
     */
    void setValue(double value);

     /**
      * @brief Set the value of this attribute.
      * @param value The new value of this attribute as bool.
      */
    void setValue(bool value);
};

/*
 * @brief Class representing an xml element.
 */
class XMLElement {
private:

    tinyxml2::XMLElement* ti_element;

    friend class XMLDocument;
public:
    /**
     * @brief Default constructor.
     */
    XMLElement();

    /**
     * @brief Constructor.
     */
    XMLElement(tinyxml2::XMLElement*);

    /**
     * @brief Get the name of this element.
     */
    std::string name() const;

    /**
     * @brief Get the value of this element as string.
     * Returns an empty string when the element does not contain any text.
     * @param def Optional value to be returned when the element does not exist (default: "*nonexistent_element*").
     */
    std::string value(std::string def = "*nonexistent_element*") const;

    /**
     * @brief Get the value of this element as double.
     * @param def Optional value to be returned when the element does not exist (default: 0.0).
     */
    double valueAsDouble(double def = 0.0) const;

    /**
     * @brief Get the value of this element as int.
     * @param def Optional value to be returned when the element does not exist (default: 0).
     */
    int valueAsInt(int def = 0) const;

    /**
     * @brief Get the value of this element as bool.
     * @param def Optional value to be returned when the element does not exist (default: false).
     */
    bool valueAsBool(bool def = false) const;

    /**
     * @brief Get the first child element with the specified name.
     * @param name The name of the child.
     */
    XMLElement getChild(std::string name);

    /**
     * @brief Get all the children of this element.
     */
    std::vector<XMLElement> getChildren();

    /**
     * @brief Get all the children with the specified name.
     * @param name The name of the elements.
     */
    std::vector<XMLElement> getChildren(std::string name);

    /**
     * @brief Check if the attribute with that name exists on this element.
     * @param name The name of the attribute.
     */
    bool attributeExists(std::string name);

    /**
     * @brief Check if there exists a child of this element with that name.
     * @param name The name of the element.
     */
    bool childExists(std::string name);

    /**
     * @brief Get the attribute with the specified name.
     * @param name The name of the attribute.
     * @return The found attribute as XMLAttribute object.
     */
    XMLAttribute getAttribute(std::string name);

    /**
     * @brief Get all the attributes on this element.
     * @return A std::vector of all the found attributes as XMLAttribute object.
     */
    std::vector<XMLAttribute> getAttributes();

    /**
     * @brief Sets the value of this element.
     * @param value The new value of this element as string.
     */
    void setValue(std::string value);

    /**
     * @brief Sets the value of this element.
     * @param value The new value of this element as int.
     */
    void setValue(int value);

    /**
     * @brief Sets the value of this element.
     * @param value The new value of this element as double.
     */
    void setValue(double value);

    /**
     * @brief Sets the value of this element.
     * @param value The new value of this element as bool.
     */
    void setValue(bool value);

    /**
     * @brief Adds a child element to this element.
     *
     * @code{.xml}
     * <element>
     *   <name>value<name>
     * </element>
     * @endcode
     *
     * @param name The name of the new element.
     * @param value The value of the new element as string.
     */
    void addChild(std::string name, std::string value);

    /**
     * @brief Adds a child element to this element.
     *
     * \see addChild(std::string name, std::string value) for a more detailed explanation.
     *
     * @param name The name of the new element.
     * @param value The value of the new element as int.
     */
    void addChild(std::string name, int value);

    /**
     * @brief Adds a child element to this element.
     *
     * \see addChild(std::string name, std::string value) for a more detailed explanation.
     *
     * @param name The name of the new element.
     * @param value The value of the new element as double.
     */
    void addChild(std::string name, double value);

    /**
     * @brief Adds a child element to this element.
     *
     * \see addChild(std::string name, std::string value) for a more detailed explanation.
     *
     * @param name The name of the new element.
     * @param value The value of the new element as bool.
     */
    void addChild(std::string name, bool value);

    /**
     * @brief Removes all child elements.
     */
    void removeChildren();

    /**
     * @brief Removes all child elements with specified name.
     * @param name The name of child elements to be removed.
     */
    void removeChildren(std::string name);

    /**
     * @brief Removes a child element.
     *
     * Note: If the given parameter XMLElement is not a child, nothing will be removed.
     *
     * @param child The child element to be removed.
     */
    void removeChild(XMLElement child);

    /**
     * @brief Sets the value of an attribute on this element.

     * Note: This function will add a new attribute if
     * an attribute with the specified name does not exist.
     *
     * @param name The name of the (new) attribute.
     * @param value The value of the (new) attribute as string.
     */
    void setAttribute(std::string name, std::string value);

    /**
     * @brief Sets the value of an attribute on this element.
     *
     * \see setAttribute(std::string name, std::string value)  for a more detailed explanation.
     *
     * @param name The name of the (new) attribute.
     * @param value The value of the (new) attribute as int.
     */
    void setAttribute(std::string name, int value);

    /**
     * @brief Sets the value of an attribute on this element.
     *
     * \see setAttribute(std::string name, std::string value)  for a more detailed explanation.
     *
     * @param name The name of the (new) attribute.
     * @param value The value of the (new) attribute as double.
     */
    void setAttribute(std::string name, double value);

    /**
     * @brief Sets the value of an attribute on this element.
     *
     * \see setAttribute(std::string name, std::string value)  for a more detailed explanation.
     *
     * @param name The name of the (new) attribute.
     * @param value The value of the (new) attribute as bool.
     */
    void setAttribute(std::string name, bool value);
};

/*
 * @brief Class representing an xml document
 */
class XMLDocument {
private:
    std::string document_file_name;

    std::string error_desc;

    //TinyXML variables
    tinyxml2::XMLDocument* ti_document;

    std::string writeElement(XMLElement element, std::string indent = "");

public:
    /**
     * @brief Default constructor.
     */
    XMLDocument();

    /**
     * @brief Default deconstructor.
     */
    virtual ~XMLDocument();

    /**
     * @brief Returns the document name that was used to load a file and will be used as default to save a file.
     * @return Document name as string
     */
    std::string documentName() const;

    /**
     * @brief Returns the root element of this document.
     * @return Root element as CXml::XMLElement.
     */
    XMLElement root();

    /**
     * @brief Returns a detailed error description if loadFile failed.
     * @return Error description as string.
     */
    std::string errorDesc();

    /**
     * @brief Loads an xml file from memory.
     * You can get a detailed error description from errorDesc() when this function returns false.
     * @return Returns true if loading succeeded, false otherwise.
     */
    bool loadFile(std::string file_name);

    /**
     * @brief Writes a file to memory.
     * Defaults to using the same filename used to load the document.
     * @return Returns true if writing succeeded, false otherwise.
     */
    bool writeFile(std::string file_name = "");

    /**
     * @brief Returns a pointer to the tinyxml2::XMLDocument for advanced use.
     * @return tinyxml2::XMLDocument* document pointer.
     */
    tinyxml2::XMLDocument* getTinyxml2Document();
};

}

#endif
