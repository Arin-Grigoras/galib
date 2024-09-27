#include "../include/math/radians_to_degrees.h"


#ifdef __STDC__
    float glb_radians_to_degreesf(float radians)
#else
    float glb_radians_to_degreesf(radians)
    float radians;
#endif
{
    return (radians * 180) / GLB_PI;
}