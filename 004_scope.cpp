#include<iostream>
#include<stdio.h>

// Notes: 004: Scope of Variables:
// Notes: ========================
// Notes:   C++ provides a new operator, the scope resolution operator ::
// Notes:   this operator can be used to distinguish between a local variable
// Notes:   and a global variable by the same name.
// Notes:
// Notes:   The scope resolution operator applies in subroutines as well.
// Notes:

using namespace std;


int i = 5;
int j = 7;


void fun1(void)
{
  int i = 500;
  int j = 700;

  cout << "\n Inside fun1:\n";
  // %i and %j
  printf("i is %i, j is %i \n", i, j);
  printf("::i is %i, ::j is %i \n", ::i, ::j);

  i++;
  j++;
  ++::i;
  ++::j;
}

int main(void)
{
  int i = 50;
  int j = 70;

  cout << "\n Inside main, before new scope:\n";

  // %i and %j
  printf("i is %i, j is %i \n", i, j);
  printf("::i is %i, ::j is %i \n", ::i, ::j);

  i++;
  j++;
  ::i++;
  ::j++;

  // Start a new scope
  {
    int i = 500;
    int j = 700;

    cout << "\n Inside new scope:\n";
    // %i and %j
    printf("i is %i, j is %i \n", i, j);
    printf("::i is %i, ::j is %i \n", ::i, ::j);

    i++;
    j++;
    ::i++;
    ::j++;
  }

  cout << "\n Before calling subroutine fun1():\n";

  // %i and %j
  printf("i is %i, j is %i \n", i, j);
  printf("::i is %i, ::j is %i \n", ::i, ::j);

  fun1();

  cout << "\n After calling subroutine fun1():\n";

  // %i and %j
  printf("i is %i, j is %i \n", i, j);
  printf("::i is %i, ::j is %i \n", ::i, ::j);
}
