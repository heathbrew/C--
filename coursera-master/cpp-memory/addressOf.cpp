/**
 * C++ program using the & operator to find the address of a variable in memory.
 * 
 * @ayushman
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int num = 7;

  std::cout << "Value: "   <<  num << std::endl;
  std::cout << "Address: " << &num << std::endl;

  return 0;
}







