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
std::string upper(int height){
    std::string shape = "";
    for(int i = 0;i <= height;i++){
        for(int k = 0;k <= i;k++){
            shape += " ";
        }
        for(int j = height;j >= i;j--){
            shape +="*";
        }
        shape += "\n";
    }
    return shape;
}
std::string trapezoid(int width, int height){
    std::string shape = "";
    int spaces = 0;
    int stars = width;

    for(int i = 0; i < height; i++){
        for(int k = spaces;k >= 0;k--){
            shape += " ";
        }
        for(int j = stars;j > 0;j--){
            shape += "*";
        }
        
        spaces += 1;
        stars -= 2;
        shape += "\n";
    }
    return shape;
}
std::string checkerboard3x3(){
    //mod 6
}