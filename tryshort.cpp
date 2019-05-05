#include <iostream>

int main (void){
  short try_me = 546;
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = try_me * 0x1a3b;
  std::cout << "try_me * 0x1a3b value: ";
  std::cout << std::hex << try_me;
  std::cout << "\n";

  std::cout << "The size of try_me is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)\n";
}
