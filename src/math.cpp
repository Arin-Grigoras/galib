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
        return flipped ? 1.0f / r : r;
    }

    glb_f32 sqrt(glb_f32 x) { return __builtin_sqrt(x); }
    glb_f32 rsqrt(glb_f32 x) { return 1.0f / galib::sqrt(x); }
    glb_f32 hypot(glb_f32 x, glb_f32 y) { return galib::sqrt(galib::pow(x, 2) + galib::pow(y, 2)); }

    glb_f32 floor(glb_f32 x) { return (float)((x >= 0.0f) ? (int)x              : (int)(x - 0.9999999999999999f)); }
    glb_f32 ceil(glb_f32 x)  { return (float)((x <  0.0f) ? (int)x              : ((int)x) + 1); }
    glb_f32 alib_round(glb_f32 x) { return (float)((x >= 0.0f) ? galib::floor(x + 0.5f) : galib::ceil(x - 0.5f)); }
};