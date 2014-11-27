/*
 * Vector.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Vector.h"

namespace ty {

Vector::Vector() {
	// TODO Auto-generated constructor stub

}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

} /* namespace ty */

Vector Vector::operator+(const Vector& one){
	return Vector(x+one.x,y+one.y);
}
Vector Vector::operator-(const Vector& one){
	return Vector(x-one.x,y-one.y);
}
Vector Vector::operator/(double factor){
	return Vector(x/factor,y/factor);
}
Vector Vector::operator*(double factor){
	return Vector(x*factor,y*factor);
}
Vector::Vector(double x,double y):x(x),y(y){}
double getX(){
	return x;
}
double getY(){
	return y;
}