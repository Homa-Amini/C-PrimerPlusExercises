#include <iostream>
#include <vector>

void getInput(std::vector<double> &inputs, const int size=10){
  double input;  
  for(int i=0; i!=size; ++i){
         std::cin >> input;
         inputs.push_back(input);
         //inputs.push_back(std::stod(input));
    }
}

void display(const std::vector<double> inputs){
    for(auto i : inputs){
        std::cout << i << " , ";
    }
}
void avarage(const std::vector<double> inputs){
  double sum = 0.0;
  for(auto i : inputs){
        sum += i;
  }
  std::cout <<  sum/inputs.size() << "\n";;
}
int main(){
    const int numberOfInputs = 0;
    const int scoreSize = 0;
    std::vector<double> inputs{0.0};
    std::cout<<"Enter up to 10 goft scores: \n ";
    getInput(inputs);
    std::cout<< std::endl;
    std::cout << " The entered scores are: \n";
    display(inputs);
    std::cout<< std::endl;
    std::cout << "The avarge of entered scores is: \n";
    avarage(inputs);

    return EXIT_SUCCESS;;
}
