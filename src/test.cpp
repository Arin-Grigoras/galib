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

    return 0;
}