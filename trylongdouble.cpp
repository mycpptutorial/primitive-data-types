#include <iostream>

int main (void){
  long double try_me = 54.6123;
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = try_me * 0x2344ffd12344ffd1;
  std::cout << "try_me * 0x2344ffd12344ffd1 value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = try_me * 100000000;
  std::cout << "try_me * 100000000 value: ";
  std::cout << try_me;
  std::cout << "\n";

  std::cout << "The size of try_me is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)\n";
}
