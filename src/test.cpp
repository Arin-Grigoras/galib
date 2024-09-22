#include <iostream>
#include "../include/galib.h"
#include <cmath>


int main(void){

    std::cout << galib::degrees_to_radians(1) << "\n";
    std::cout << galib::radians_to_degrees(1) << '\n';

    std::cout << "\n\n";

    galib::Vec2d n;

    std::cout << n.getX() << '\n' << n.getY() << "\n";

    std::cout << std::endl;


    std::cout << galib::exp(2) << '\n';
    std::cout << exp(2) << "\n";

    std::cout << std::endl;
    std::cout << galib::pow(2.5256, 2) << "\n";
    std::cout << pow(2.5256, 2);

    std::cout << std::endl;
    std::cout << galib::hypot(3, 4);
    std::cout << "\n";

    std::cout << std::endl;
    std::cout << glb_abs(-10) << "\n";

    std::cout << std::endl;
    std::cout << galib::exp2(2) << "\n";

    return 0;
}