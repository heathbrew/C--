/*
 * Simple C++ making use of std::cout and a `Cube` class.
 */

#include <iostream>
#include "Cube.h"
#include "Cube.cpp"
int main() {
  uiuc::Cube c;
  c.setLength(2.4);
  std::cout << "Volume: " << c.getVolume() << std::endl;

  double surfaceArea = c.getSurfaceArea();
  std::cout << "Surface Area: " << surfaceArea << std::endl;

  return 0;
}
