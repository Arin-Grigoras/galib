#include "../include/math/copysign.h"


#ifdef __STDC__
    float glb_copysignf(float x, float y)
#else
    float glb_copysignf(x, y)
    float x, y;
#endif
{
    int s1, s2;
    s1 = x >= 0 ? 1 : -1;
    s2 = y >= 0 ? 1 : -1;
    if(s1 == -1 && s2 == -1){
        return x;
    }
    else if(s1 == -1 && s2 == 1){
        return -x;
    }
    return x * s2;
}