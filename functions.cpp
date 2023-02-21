#include <iostream>
//Task A - Box
std::string box(int width, int height){
    std::cout << "Shape: " << std::endl; 
    std::string shape = "";
    for(int i = 0; i< height;i++){
        for(int j = 0; j < width;j++){
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}
//Task B - Checkerboard
std::string checkerboard(int width,int height){
    std::cout << "Shape: " << std::endl;
    std::string shape = "";
    for(int i = 0; i < height;i++){
        for(int j = 0; j < width;j++){    
            if(i % 2 == 0){  
                if(j % 2 == 0){
                    shape = shape + "*";
                }
                else{
                    shape += " ";
                }
            }
            else{
                if(j % 2 == 0){
                    shape +=" ";
                }
                else{
                    shape += "*";
                }
            }
        }
        shape = shape + "\n";
    }
    return shape;
}
//Task C - Cross
std::string cross(int height){
    std::string shape = "";
    for(int i = 1; i <= height; i++){//col
        for(int j = 1; j <= height; j++){//row
            if(j == i || j+i == height+1){
                shape+= "*";
            }
            else{
                shape+= " ";
            }
        }
        shape += "\n";
    }
    return shape;
}
std::string lower(int height){
    std::string shape = "";
    for(int i = 0;i <= height;i++){
        for(int j = 0; j <= i;j++){
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}