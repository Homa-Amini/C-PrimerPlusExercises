#include<iostream>
#include "golf.hpp"

void setgolf(golf & g, const char * name, int hc){
  strcpy(g.fullname,name);
  g.handicap = hc;
}

int setgolf(golf & g){
  g.handicap = 0;
  std::cout << "Enter a golfer's full name:  ";
  std::cin.getline(g.fullname,Len);
  if(g.fullname[0]){
    std::cout << "Enter golf handicap number: ";
    std::cin >> g.handicap;
    //this line is needed to be able to read the next line
    std::cin.get();
    return 1;}
  else{
    return 0;}
}

void handicap(golf & g, int hc){
  g.handicap = hc;
}

void showgolf(const golf & g){
    std::cout << "The golferr's full name is: "<< g.fullname << " and the handicap number is: " << g.handicap << "\n";
}

