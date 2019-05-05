#include <iostream>

int main (void){
  wchar_t try_me = '}';
  std::cout << "try_me (wchar_t) hex value for '}': ";
  std::wcout << std::hex << try_me;
  std::cout << std::endl;

  std::cout << "The size of try_me (wchar_t) ";
  std::wcout << std::hex << try_me;
  std::wcout << " is ";
  std::cout << sizeof try_me;
  std::cout << " byte(s)" << std::endl;

  try_me = 0xa1df10fd;
  std::cout << "try_me (wchar_t) hex value: ";
  std::cout << std::hex << try_me << std::endl;

  std::cout << "The size of try_me (wchar_t) ";
  std::wcout << std::hex << try_me;
  std::wcout << "is";
  std::cout << sizeof try_me;
  std::cout << " byte(s)" << std::endl;
}
