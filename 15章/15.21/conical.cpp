#include "conical.h"
double conical::acreage() const {
	return pie * (diameter / 2) * (diameter / 2 + generatrix);
 }