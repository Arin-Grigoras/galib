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
        f = exp(y - e);

        while(e){
            if(e & 1) r *= x;
            x *= x;
            e >>= 1;
        }
        r *= f;
        return flipped ? 1.0f / r : r;
    }
};