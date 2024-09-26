#include "../include/math/pow.h"
#include "../include/math/exp.h"


#ifdef __STDC__
    float glb_powf(float x, float y)
#else
    float glb_powf(x, y)
    float x, y;
#endif
{
    int flipped = 0, e;
    float f, r = 1.0f;
    if(y < 0){
        flipped = 1;
        y = -y;
    }
    e = (int)y;
    f = glb_expf(y - e);

    while(e){
        if(e & 1) r *= x;
        x *= x;
        e >>= 1;
    }
    r *= f;
    return flipped ? 1.0f / r : r;
}