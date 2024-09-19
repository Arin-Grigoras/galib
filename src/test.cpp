#include <iostream>
#include "../include/galib.h"


int main(void){

    std::cout << galib::degrees_to_radians(1) << "\n";
    std::cout << galib::radians_to_degrees(1) << '\n';

    std::cout << "\n\n";

    galib::Vec2d n;

    std::cout << n.getX() << '\n' << n.getY() << "\n";

    return 0;
}