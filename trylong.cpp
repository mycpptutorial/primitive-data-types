#include <iostream>

int main (void){
  long try_me = 546;
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = try_me * 0x2344ffd1;
  std::cout << "try_me * 0x2344ffd1 value: ";
  std::cout << std::hex << try_me;
  std::cout << "\n";

  std::cout << "The size of try_me is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)\n";
}
