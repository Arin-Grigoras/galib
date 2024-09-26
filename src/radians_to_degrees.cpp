#include "../include/math/degrees_to_radians.h"


#ifdef __STDC__
    float glb_radians_to_degreesf(float radians)
#else
    float glb_radians_to_degreesf(degrees)
    float degrees;
#endif
{
    return (radians * 180) / GLB_PI;
}