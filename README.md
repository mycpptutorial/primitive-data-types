# primitive-data-types
A C++ project to include samples for different types of primitive data types in C++


#Building and running trybool.cpp

In this sample, I initiated a boolean variable called try_me to false which its printed value is 0; Then I set it to true which its print value is 1. Finally, I printed the size a **boolean** variable that is 1 byte.

```
$ g++ -o trybool trybool.cpp
$ ./trybool
try_me value: 0
try_me value: 1
The size of try_me is 1 byte(s)
```

#Building and running tryint.cpp

In this sample, I initiated an integer variable called try_me to 100 which its printed value is 100; Then I set it to try_me * 0x1344ffd1 which its printed value is -2030834268. Finally, I printed the size a **int** variable that is 4 bytes.

```
$ g++ -o tryint tryint.cpp
$ ./tryint
try_me value: 100
try_me * 0x1344ffd1 value: -2030834268
The size of try_me is 4 byte(s)
```

#Building and running tryshort.cpp

In this sample, I initiated an integer variable called try_me to 100 which its printed value is 100; Then I set it to try_me * 0x1a3b which its printed value is f1d6 hex value. Finally, I printed the size a **short** variable that is 4 bytes.

```
$ g++ -o tryshort tryshort.cpp
$ ./tryshort
try_me value: 546
try_me * 0x1a3b value: f1d6
The size of try_me is 2 byte(s)
```

#Building and running trylong.cpp

In this sample, I initiated an integer variable called try_me to 546 and its printed value is 546; and then I set it to try_me * 0x2344ffd1 which its printed value is 4b39299bc2 hex value. Finally, I printed the size a **long** variable that is 8 bytes.

```
$ g++ -o trylong trylong.cpp
$ ./trylong
try_me value: 546
try_me * 0x2344ffd1 value: 4b39299bc2
The size of try_me is 8 byte(s)
```

#Building and running trylonglong.cpp

In this sample, I initiated an integer variable called try_me to 546 and its printed value is 546; and then I set it to try_me * 0x2344ffd12344ffd1 which its printed value is 39299c0d39299bc2 hex value. Finally, I printed the size a **long long** variable that is 8 bytes.

```
$ g++ -o trylonglong trylonglong.cpp
$ ./trylonglong
try_me value: 546
try_me * 0x2344ffd12344ffd1 value: 39299c0d39299bc2
The size of try_me is 8 byte(s)
```

#Building and running trychar.cpp

In this sample, I initiated an char variable called try_me to "N" and its printed value is "N"; Then I set it to an ASCII code 89 which its print value is "Y". Finally, I printed the size a char variable that is 1 bytes.

```
$ g++ -o trychar trychar.cpp
$ ./trychar
try_me value: N
The char value of try_me that is set to its ASCII code 89 is: Y
The size of try_me is 1 byte(s)
```

#Building and running trychar16_t.cpp

In this sample, I initiated an char variable called try_me to "}" and its printed value is 7d hex value; Then I set it to a char code 0x10fd which its print value is 10fd hex value. Finally, I printed the size a char variable that is 2 bytes.

```
$ g++ -o trychar16_t trychar16_t.cpp
$ ./trychar16_t
try_me (char16_t) hex value for '}': 7d
try_me (char16_t) 0x10fd hex value: 10fd
The size of try_me (char16_t) is 2 byte(s)
```

#Building and running trychar32_t.cpp

In this sample, I initiated an char variable called try_me to "}" and its printed value is 7d hex value; Then I set it to a char code 0xa1df10fd which its print value is a1df10fd hex value. Finally, I printed the size a char variable that is 4 bytes.

```
$ g++ -o trychar32_t trychar32_t.cpp
$ ./trychar32_t
try_me (char32_t) hex value for '}': 7d
try_me (char32_t) 0xa1df10fd hex value: a1df10fd
The size of try_me (char32_t) is 4 byte(s)
```
