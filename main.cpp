//Thomas Huang, ThomasH242
#include <iostream>
#include "func.h"

int main(){
    //Task A
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = box(7,4);
    std::cout << "box(7,4):\n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task B   
    result = checkerboard(8,4);
    std::cout << "checkboard(8,4):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = checkerboard(11,6);
    std::cout << "checkboard(11,6):\n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task C
    result = cross(8);
    std::cout << "cross(8):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = cross(11);
    std::cout << "cross(11):\n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task D - Lower Triangle
    result = lower(10);
    std::cout << "lower(10):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = lower(6);
    std::cout << "lower(6):\n";
    std::cout << result;
    std::cout << "\n------------------\n\n";
    //Task E - Upper triangle
    return 0;
}