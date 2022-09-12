/**
 * C++ code for creating a Cube of length 2.4 units.
 */

#include <iostream>
#include "Cube.h"
#include "Cube.cpp"
int main() {
  Cube c;

  c.setLength(3.48);
  double volume = c.getVolume();
  std::cout << "Volume: " << volume << std::endl;

  return 0;
}
