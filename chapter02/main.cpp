//
//  main.cpp
//  Cpp-Primer-Plus-Chapter2-Exercises
//
//  Created by Homa Amini on 27.01.19.
//  Copyright © 2019 Homa Amini. All rights reserved.
//

#include <iostream>

void convert_inches_to_feet(uint16_t InchHeight);

int main(int argc, const char * argv[]) {
    std::cout << "Enter your height in inches";
    uint16_t height_in_inches = 0;
    std::cin >> height_in_inches;
    convert_inches_to_feet(height_in_inches);
    
    return 0;
}

void convert_inches_to_feet(uint16_t inchHeight){
    uint16_t feetHeight = inchHeight/12;
    uint16_t leftInchHeight = inchHeight%12;
    std::cout<< inchHeight << " height in Inches is equall to: " << feetHeight << " Feet and "<< leftInchHeight << " Inches." << std::endl;
    
}
