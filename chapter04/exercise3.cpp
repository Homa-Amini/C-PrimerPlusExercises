#include<iostream>

struct box{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void display(struct box b){
  std::cout << "maker: "<< b.maker <<"\n";
  std::cout << "height: "<< b.height <<"\n";
  std::cout << "width: "<< b.width <<"\n";
  std::cout << "length: "<< b.length <<"\n";
  std::cout << "volume: "<< b.volume <<"\n";
 
}

void setVolume(struct box& b){
  b.volume = b.height*b.width*b.length;
}
int main(){
  box box1 = {"Apple",20.0f,10.4f,30.0f,7.0f};
  display(box1);
  std::cout << "After setting the volume by the height, width and length\n";
  setVolume(box1);
  display(box1);

  return 1;
}
