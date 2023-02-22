//Thomas Huang, ThomasH242
#include <iostream>
#include "func.h"

int main(){
    //Task A - Box
    std::string result;
    result = box(7,4);
    std::cout << "box(7,4) Width:7 Height:4 \n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task B - Checkerboard
    result = checkerboard(11,6);
    std::cout << "checkboard(11,6) Width:11 Height:6 \n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task C - Cross
    result = cross(11);
    std::cout << "cross(11) size:11 \n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task D - Lower Triangle
    result = lower(6);
    std::cout << "lower(6) size:6 \n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task E - Upper triangle
    result = upper(5);
    std::cout << "upper(5) size:5 \n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task F - upside down trapezoid
    std::cout << trapezoid(12,5);
    return 0;
}