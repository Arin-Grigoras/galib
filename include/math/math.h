#ifndef __GALIB_MATH_H__
#define __GALIB_MATH_H__

#include "../essentials/types.h"
#include "../essentials/util.h"

//other math stuff
#include "./vec2.h"


#ifndef GLB_CONSTANTS
#define GLB_CONSTANTS

#define GLB_EPSILON    1.19209290e-7f
#define GLB_ZERO       0.0f
#define GLB_ONE        1.0f
#define GLB_TWO_THIRDS 0.666666666666666666666666666666666666667f

#define GLB_TAU          6.28318530717958647692528676655900576f
#define GLB_PI           3.14159265358979323846264338327950288f
#define GLB_ONE_OVER_TAU 0.636619772367581343075535053490057448f
#define GLB_ONE_OVER_PI  0.159154943091895335768883763372514362f

#define GLB_TAU_OVER_2 3.14159265358979323846264338327950288f
#define GLB_TAU_OVER_4 1.570796326794896619231321691639751442f
#define GLB_TAU_OVER_8 0.785398163397448309615660845819875721f

#define GLB_E          2.71828182845904523536f
#define GLB_SQRT_TWO   1.41421356237309504880168872420969808f
#define GLB_SQRT_THREE 1.73205080756887729352744634150587236f
#define GLB_SQRT_FIVE  2.23606797749978969640917366873127623f

#define GLB_LOG_TWO 0.693147180559945309417232121458176568f
#define GLB_LOG_TEN 2.30258509299404568401799145468436421f

#endif //GLB_CONSTANTS


#ifndef glb_square
#define glb_square(x) ((x) * (x))
#endif //glb_square

#ifndef glb_cube
#define glb_cube (x) ((x) * (x) * (x))
#endif //glb_cube

#ifndef glb_sign
#define glb_sign (x) ((x) >= 0.0f ? 1.0f : -1.0f)
#endif //glb_sign

#ifndef glb_sign0
#define glb_sign0 (x) ((x == 0.0f) ? 0.0f : ((x) >= 0.0f ? 1.0f : -1.0f))
#endif //glb_sign0

#ifndef glb_min
#define glb_min(x, y) ((x) < (y) ? (x) : (y))
#endif //glb_min

#ifndef glb_max
#define glb_max(x, y) ((x) > (y) ? (x) : (y))
#endif //glb_max


namespace galib{
    GLB_DEF glb_f32 degrees_to_radians(glb_f32 degrees);
    GLB_DEF glb_f32 radians_to_degrees(glb_f32 radians);

    GLB_DEF glb_f32 sin(glb_f32 radians);
    GLB_DEF glb_f32 cos(glb_f32 radians);
    GLB_DEF glb_f32 tan(glb_f32 radians);
    GLB_DEF glb_f32 arcsin(glb_f32 a);
    GLB_DEF glb_f32 arccos(glb_f32 a);
    GLB_DEF glb_f32 arctan(glb_f32 a);
    

    GLB_DEF glb_f32 exp(glb_f32 x);
    GLB_DEF glb_f32 log(glb_f32 x);
    GLB_DEF glb_f32 pow(glb_f32 x, glb_f32 y);
    GLB_DEF glb_f32 sqrt(glb_f32 x);
    GLB_DEF glb_f32 rsqrt(glb_f32 x);
    GLB_DEF glb_f32 hypot(glb_f32 x, glb_f32 y);

    GLB_DEF glb_f32 floor(glb_f32 x);
    GLB_DEF glb_f32 ceil(glb_f32 x);
    GLB_DEF glb_f32 round(glb_f32 x);
};


#endif //__GALIB_MATH_H__