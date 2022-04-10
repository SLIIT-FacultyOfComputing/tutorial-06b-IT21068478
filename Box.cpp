#include "Box.h"

// Implement setters and getters

// Implemenet the calcVolume() unction
void Box::setlength (int l){
  length = l;
}

void Box::setwidth (int w){
  width = w;
}

void Box::setheight (int h){
  height = h;
}

int Box::getlength (){
  return length;
}

int Box::getwidth (){
  return width;
}

int Box::getheight (){
  return height;
}

int Box::calcVolume() {
  return length * width * height;
}
