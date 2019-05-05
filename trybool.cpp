#include <iostream>

int main (void){
  bool try_me = false;
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = true;
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  std::cout << "The size of try_me is ";
  std::cout << sizeof try_me;
  std::cout << "bytes \n";
}
