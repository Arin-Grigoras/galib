#include "../include/math/exp.h"


#ifdef __STDC__
    float glb_expf(float x)
#else
    float glb_expf(x)
    float x;
#endif
{
    union {
        float f;
        int i;
    } u, v;
    u.i = (int)(6051102 * x + 1056478197);
    v.i = (int)(1056478197 - 6051102 * x);
    return u.f / v.f;
}