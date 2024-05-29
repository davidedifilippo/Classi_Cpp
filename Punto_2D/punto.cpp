#include "punto.h"

Punto::Punto(float ascissa, float ordinata) {
	x = ascissa;
	y = ordinata;
}


float Punto::getX() {

	return x;
}

float Punto::getY() {

	return y;
}

void Punto::setX(float x) {
	this->x = x;
}

void Punto::setY(float y) {
	this->y = y;
}
