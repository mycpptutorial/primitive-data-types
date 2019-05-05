#include <iostream>

int main (void){
  char16_t try_me = '}';
  std::cout << "try_me (char16_t) hex value for '}': ";
  std::wcout << std::hex << try_me;
  std::cout << "\n";

  try_me = 0x10fd;
  std::cout << "try_me (char16_t) hex value: ";
  std::cout << std::hex << try_me << std::endl;

  std::cout << "The size of try_me (char16_t) is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)" << std::endl;
}
