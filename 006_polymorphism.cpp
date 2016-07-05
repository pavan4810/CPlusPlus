#include<iostream>
#include<stdio.h>

// Notes: 006: Polymorphism of functions
// Notes: ==============================
// Notes:   C++ tightens the requirement for function prototype headers.
// Notes:   The reason it tightens the function prototype header rules is
// Notes:   related to the feature called polymorphism that C++ provides.
// Notes:   Examine the TWO FUNCTIONS they have the same name, but take
// Notes:   different argument lists.
// Notes:
// Notes:   Function Call Resolver.
// Notes:     Rule 1: Can I distinguish between functions by their name?
// Notes:     Rule 2: If functions have same name,
// Notes:             do they have different argument lists?
// Notes:

using namespace std;

int func1(void);
int func1(int);

int main(void)
{
  int i = 0;

  cout << "In MAIN\n";
  cout << "Before call i is " << i << "\n\n";
  i = func1();
  cout << "After first call i is " << i << "\n\n";
  i = func1(i);
  cout << "After second call i is " << i << "\n\n";
}

int func1(void)
{
  printf("IN func1, no argument version\n");
  return 1;
}

int func1(int)
{
  printf("IN func1, integer argument version\n");
  return 253;
}
