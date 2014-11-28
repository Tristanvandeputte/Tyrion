/*
 * Vector.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Vector.h"

Vector::Vector() {
	// TODO Auto-generated constructor stub

}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

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
double Vector::getX(){
	return x;
}
double Vector::getY(){
	return y;
}
void Vector::setX(double X){
	x=X;
}
void Vector::setY(double Y){
	y=Y;
}