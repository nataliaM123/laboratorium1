#include "trygonometria.h"
#include <math.h>
double const pi=3.14;
double sin_degree(double degree) {
	double radian=degree*pi/180.0;
	return sin(radian);   //funkcja biblioteczna z math.h
}
double cos_degree(double degree) {
	double radian=degree*pi/180.0;
	return cos(radian);   //funkcja biblioteczna z math.h
}