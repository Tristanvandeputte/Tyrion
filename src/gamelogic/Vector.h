/*
 * Vector.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector{
private:
	double x;
	double y;
public:
	//operator(const Vector& one);
	Vector operator+(const Vector& one);
	Vector operator-(const Vector& one);
	Vector operator/(double factor);
	Vector operator*(double factor);
	Vector();
	Vector(double x,double y);
	virtual ~Vector();
	double getX();
	double getY();
	void setX(double X);
	void setY(double Y);
};

#endif