#include<iostream>
#include<stdio.h>

// Notes: 007: Arguments order
// Notes: ====================
// Notes:   Handy feature of C++ polymorphic functions can be used,
// Notes:   When you have a function that takes two arguments of two different
// Notes:   types and a lot of people are going to use that function, you can
// Notes:   make the function easier to use by allowing the programmer to call
// Notes:   the function with the arguments in either order.
// Notes:
// Notes:   MAINTENANCE POINT
// Notes:     You have to decide whether to use polymorphic names for a
// Notes:     function or whether to use default arguments for a function you
// Notes:     create a chicken and egg problem if you use both polymorphic
// NOtes:     names for a function and default arguments for a function.

using namespace std;

void func1(char *, int);
void func1(int, char*);

int main(void)
{
  // Call the function the first way
  func1("Pavan", 31);

  // Call the function the second way
  func1(31, "Pavan");
}

void func1(char *name, int age)
{
  cout << name << " is " << age << " years old" << endl;
}

void func1(int age, char *name)
{
  cout << name << " is " << age << " years old" << endl;
}
