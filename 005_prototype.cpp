#include<iostream>

// Notes: 005: Mandatory function prototype
// Notes: =================================
// Notes:   C++ tightens the requirement for function prototype headers.
// Notes:   In C, you can get away without having the header.
// Notes:   In C++ you have to have the header.
// Notes:

using namespace std;

//#include<stdio.h>
//int func1(void);

int main(void)
{
  printf("IN main\n");
  func1();
}

int func1(void)
{
  printf("IN Func1\n");
  return 1;
}
