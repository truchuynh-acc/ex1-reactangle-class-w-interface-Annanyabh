/**Driver Code*/
/**
Programmer: [Annanya bhattarai]            
Project number: 1              
Project Desc: quadratic expression 
Course: COSC-2436-007 (92905) III Data Structures    
Date: 05/07/2024                     
*/

#include <iostream>
#include "rectangle.h"

int main() {
    Rectangle rect;

    std::cout << "Initial Rectangle dimensions (1x1): Length = " << rect.getLength() << ", Width = " << rect.getWidth() << ", Area = " << rect.getArea() << std::endl;

    if (rect.set(3.0, 4.0)) {
        std::cout << "Updated Rectangle dimensions: Length = " << rect.getLength() << ", Width = " << rect.getWidth() << ", Area = " << rect.getArea() << std::endl;
    } else {
        std::cout << "Failed to update Rectangle dimensions due to invalid input." << std::endl;
    }

    if (!rect.set(-1.0, 2.0)) {
        std::cout << "Failed to update Rectangle dimensions due to invalid input." << std::endl;
    }

    return 0;
}
