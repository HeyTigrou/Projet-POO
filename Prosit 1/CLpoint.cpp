#include "CLpoint.h"
#include <iostream>
#include <math.h>

void CLpoint::ini_obj(double x, double y) {
	this->setX(x);
	this->setY(y);
}

CLpoint::CLpoint(void) {
	this->ini_obj(0, 0);
}

CLpoint::CLpoint(double x, double y) {
	this->ini_obj(x, y);
}

CLpoint::CLpoint(CLpoint& point) {
	this->ini_obj(point.getX(), point.getY());
}

double CLpoint::getX() {
	return this->x;
}

double CLpoint::getY() {
	return this->y;
}

void CLpoint::setX(double x) {
	this->x = x;
}

void CLpoint::setY(double y) {
	this->y = y;
}
