#include "../include/math/math.h"


namespace galib{
    glb_f32 degrees_to_radians(glb_f32 degrees){
        return (degrees * GLB_PI) / 180;
    }
    glb_f32 radians_to_degrees(glb_f32 radians){
        return (radians * 180) / GLB_PI;
    }
    //within 2 decimal places of accuracy
    glb_f32 exp(glb_f32 x){
        union {
            glb_f32 f;
            int i;
        } u, v;
        u.i = (int)(6051102 * x + 1056478197);
        v.i = (int)(1056478197 - 6051102 * x);
        return u.f / v.f;
    }
    //within 3 decimal places accurate
    glb_f32 pow(glb_f32 x, glb_f32 y){
        int flipped = 0, e;
        glb_f32 f, r = 1.0f;
        if(y < 0){
            flipped = 1;
            y = -y;
        }
        e = (int)y;
        f = galib::exp(y - e);

        while(e){
            if(e & 1) r *= x;
            x *= x;
            e >>= 1;
        }
        r *= f;
        return flipped ? GLB_ONE / r : r;
    }

    glb_f32 sin(glb_f32 radians) { return __builtin_sinf(radians); }
    glb_f32 cos(glb_f32 radians) { return __builtin_cosf(radians); }
    glb_f32 tan(glb_f32 radians) { return __builtin_tanf(radians); }
    glb_f32 arcsin(glb_f32 a) { return __builtin_asinf(a); }
    glb_f32 arccos(glb_f32 a) { return __builtin_acosf(a); }
    glb_f32 arctan(glb_f32 a) { return __builtin_atanf(a); }


    glb_f32 sqrt(glb_f32 x) { return __builtin_sqrt(x); }
    glb_f32 exp2(glb_f32 x) { return __builtin_powf(2, x); }
    glb_f32 ldexp(glb_f32 x, glb_f32 y) { return x * __builtin_powf(2, y); }
    glb_f32 log(glb_f32 x) { return __builtin_logf(x); }
    glb_f32 rsqrt(glb_f32 x) { return 1.0f / galib::sqrt(x); }
    glb_f32 hypot(glb_f32 x, glb_f32 y) { return galib::sqrt(glb_square(x) + glb_square(y)); }

    glb_f32 floor(glb_f32 x) { return (float)((x >= GLB_ZERO) ? (int)x              : (int)(x - 0.9999999999999999f)); }
    glb_f32 ceil(glb_f32 x)  { return (float)((x <  GLB_ZERO) ? (int)x              : ((int)x) + 1); }
    glb_f32 alib_round(glb_f32 x) { return (float)((x >= 0.0f) ? galib::floor(x + 0.5f) : galib::ceil(x - 0.5f)); }

    glb_f32 remainder(glb_f32 x, glb_f32 y){ return galib::round(x/y); }
};