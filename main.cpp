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
    std::cout << "\n------------------\n";
    //Task B   
    result = checkerboard(8,4);
    std::cout << "checkboard(8,4):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = checkerboard(11,6);
    std::cout << "checkboard(11,6):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = cross(8);
    std::cout << "checkboard(11,6):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    return 0;
}