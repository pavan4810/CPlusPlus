#include<iostream>
#include<stdio.h>

using namespace std;

// Notes: 001: standard I/O library
// Notes: =========================
// Notes:   In C++, iostream library is used for standard input and output.
// Notes:   Use "using namespace std;" to avoid using "std::".
// Notes:
// Notes:   You can still use printf and scanf of C.
// Notes:

int main(void)
{
  std::cout << "Hello World!" << std::endl;
  std::cout << "Hello World!\n";

  // std:: can be avoided by using "using namespace std;"
  cout << "Hello World!" << endl;
  cout << "Hello World!\n";

  // can still use C printf
  printf("Hello World!\n");
}
