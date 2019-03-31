#include <iostream>
#include "golf.hpp"

int main(){

  std::cout<<"Enter the maximum number of golfer's you want to store\n";
  
  int arraySize;
  std::cin >> arraySize;
  std::cin.get();
  golf golfarray[arraySize];
  
  std::cout<<"You may enter up to " << arraySize <<" players.\n";
  
  int numberOfPlayers;
  while(numberOfPlayers < arraySize && setgolf(golfarray[numberOfPlayers])){
    numberOfPlayers ++;
  }
  
  if(numberOfPlayers > 0){
    std::cout << "Here are your golf players:\n ";
    for(int i=0; i!=numberOfPlayers; ++i)
      showgolf(golfarray[i]);
  }else{
    std::cout << "You did not enter any golfers. \n";
  }

  return 0;
}
