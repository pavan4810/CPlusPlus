#include<iostream>
#include<stdio.h>

using namespace std;

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
