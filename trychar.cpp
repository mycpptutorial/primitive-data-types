#include <iostream>

int main (void){
  char try_me = 'N';
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = 89;
  std::cout << "The char value of try_me that is set to its ASCII code 89 is: ";
  std::cout << try_me;
  std::cout << "\n";

  std::cout << "The size of try_me is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)\n";
}
