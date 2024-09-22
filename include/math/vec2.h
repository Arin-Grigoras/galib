#ifndef __GALIB_VEC2_H__
#define __GALIB_VEC2_H__

#include "../essentials/types.h"

namespace galib{
    class Vec2d{
        private:
            glb_f32 x, y;

        public:

            Vec2d() : x(0), y(0) {}
            Vec2d(glb_f32 x_, glb_f32 y_);

            glb_f32 getX();
            glb_f32 getY();

            void setX(glb_f32 x_);
            void setY(glb_f32 y_);

            Vec2d& operator+=(const Vec2d& rhs){
                x += rhs.x;
                y += rhs.y;
                return *this;
            }
            Vec2d& operator-=(const Vec2d& rhs){
                x -= rhs.x;
                y -= rhs.y;
                return *this;
            }
            //scalar multiplication
            Vec2d& operator *=(const glb_f32 x_){
                x *= x_;
                y *= x_;
                return *this;
            }
    };
};


#endif //__GALIB_VEC2_H__