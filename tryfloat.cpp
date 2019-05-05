#include <iostream>

int main (void){
  float try_me = 54.6123;
  std::cout << "try_me value: ";
  std::cout << try_me;
  std::cout << "\n";

  try_me = try_me * 0x034bc01ab;
  std::cout << "try_me * 0x034bc01ab value: ";
  std::cout << try_me;
  std::cout << "\n";

  std::cout << "The size of try_me is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)\n";
}
