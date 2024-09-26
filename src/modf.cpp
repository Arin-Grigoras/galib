#include "../include/math/modf.h"

#ifdef __STDC__
    float glb_modff(float x, float* intpart)
#else
    float glb_modff(x, y)
    float x, y;
#endif
{
    float f, ax;
    int s;

    //sign value (-1 for negative and +1 for positive)
    s = x >= 0 ? 1 : -1;
    ax = x >= 0 ? x : -x; //absolute value
    f = s*(ax - galib::floor(ax)); //getting only the floating part
    *intpart = (int)x; //geting the integer part
    return f; //returning the floating part
}