#include <iostream>

template<typename T>
T harmonicMean(T a, T b){
    return (2.0*a*b)/(a+b);
}

int main(){
    
    std::cout<<"Give me a pair of numbers.\n ";
    std::cout<<"Enter the first number:\n ";
    auto firstNumber = 0.0;
    auto secondNumber = 0.0;
    std::cin >> firstNumber;
    std::cin >> secondNumber;
    if(firstNumber==0 || secondNumber==0){
       std::cerr << "Number zero terminates the program";
       return EXIT_FAILURE;
   }else{
        std::cout<<"The harmonic mean of "<<firstNumber<< " and " << secondNumber << " is " << harmonicMean(firstNumber, secondNumber) << "\n";

   }
    return 1;
}
