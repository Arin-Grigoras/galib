#include "../include/math/vec2.h"


namespace galib{
    Vec2d::Vec2d(glb_f32 x_, glb_f32 y_){
        this->x = x_;
        this->y = y_;
    }

    glb_f32 Vec2d::getX(){ return this->x; }
    glb_f32 Vec2d::getY(){ return this->y; }
    
    void Vec2d::setX(glb_f32 x_){ this->x = x_; }
    void Vec2d::setY(glb_f32 y_){ this->y = y_; }
};