#include <iostream>

int main (void){
  int try_me = 100;
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = try_me * 0x1344ffd1;
  std::cout << "try_me * 0x1344ffd1 value: ";
  std::cout << try_me;
  std::cout << "\n";

  std::cout << "The size of try_me is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)\n";
}
