#include "../include/math/expm1.h"



#ifdef __STDC__
    float glb_expm1f(float x)
#else
    float glb_expm1f(x)
    float x;
#endif
{
    if(abs(x) < 1e-5){
        return x + 0.5*x*x;
    }
    return __builtin_exp(x) - 1.0f;
}