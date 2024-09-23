#ifndef __GALIB_VEC3_H__
#define __GALIB_VEC3_H__

#include "./math.h"

namespace galib{
    class Vec3d{
        private:
            glb_f32 x, y, z;

        public:

            Vec3d() : x(0), y(0) {}
            Vec3d(glb_f32 x_, glb_f32 y_);

            glb_f32 getX();
            glb_f32 getY();

            void setX(glb_f32 x_);
            void setY(glb_f32 y_);

            glb_f32 max();
            glb_f32 dot(Vec3d v0, Vec3d v1);

            Vec3d& operator+=(const Vec3d& rhs){
                x += rhs.x;
                y += rhs.y;
                z += rhs.z;
                return *this;
            }
            Vec3d& operator-=(const Vec3d& rhs){
                x -= rhs.x;
                y -= rhs.y;
                z -= rhs.z;
                return *this;
            }
            //scalar multiplication
            Vec3d& operator *=(const glb_f32 x_){
                x *= x_;
                y *= x_;
                z *= x_;
                return *this;
            }
    };
};


#endif //__GALIB_VEC3_H__