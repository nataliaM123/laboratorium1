	#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
	#else
#include <math.h>
	#endif
double const pi=3.14;
int main()
{
	double result=0;
	#ifdef USE_TRIGONOMETRY_DEGREE
		result = cos_degree(45.0);
	#else
		result = cos(pi/4.0);
	#endif
		return result;
}