#include "../include/math.h"


namespace galib{
    glb_f32 degrees_to_radians(glb_f32 degrees){
        return (degrees * GLB_PI) / 180;
    }

    glb_f32 radians_to_degrees(glb_f32 radians){
        return (radians * 180) / GLB_PI;
    }
};