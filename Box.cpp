#include "Box.h"

// Implement setters and getters
void Box::setLength(int l){
  length = l;
}

void Box::setHeight(int h){
  height = h;
}

void Box::setWidth(int w){
  width = w;
}

int Box::getLength(){
  return length;
}

int Box::getWidth(){
  return width;
}

int Box::getHeight(){
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
