# primitive-data-types
A C++ project to include samples for different types of primitive data types in C++


#Building and running trybool.cpp

In this sample, I initiated a boolean variable called try_me to false which its printed value is 0; Then I set it to true which its print value is 1. Finally, I printed the size a boolean variable that is 1 byte.

```
$ g++ -o trybool trybool.cpp
$ ./trybool
try_me value: 0
try_me value: 1
The size of try_me is 1 byte(s)
```

#Building and running tryint.cpp

In this sample, I initiated an integer variable called try_me to 100 which its printed value is 100; Then I set it to try_me * 3000 which its printed value is 300000. Finally, I printed the size a int variable that is 4 bytes.

```
$ g++ -o tryint tryint.cpp
$ ./tryint
try_me value: 100
try_me * 3000 value: 300000
The size of try_me is 4 byte(s)
```

#Building and running trylong.cpp

In this sample, I initiated an integer variable called try_me to 546 and its printed value is 546; and then I set it to try_me * 3000 which its printed value is 1638000. Finally, I printed the size a int variable that is 8 bytes.

```
$ g++ -o trylong trylong.cpp
$ ../trylong
try_me value: 546
try_me * 3000 value: 1638000
The size of try_me is 8 byte(s)
```

#Building and running trychar.cpp

In this sample, I initiated an char variable called try_me to "N" and its printed value is "N"; Then I set it to an ASCII code 89 which its print value is "Y". Finally, I printed the size a int variable that is 1 bytes.

```
$ g++ -o trychar trychar.cpp
$ ./trychar
try_me value: N
The char value of try_me that is set to its ASCII code 89 is: Y
The size of try_me is 1 byte(s)
```
