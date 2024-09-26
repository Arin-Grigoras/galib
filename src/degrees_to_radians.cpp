#include "../include/math/degrees_to_radians.h"


#ifdef __STDC__
    double glb_degrees_to_radiansf(float degrees)
#else
    double glb_degrees_to_radiansf(degrees)
    float degrees;
#endif
{
    return (degrees * GLB_PI) / 180;
}