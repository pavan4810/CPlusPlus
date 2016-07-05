#include<iostream>
#include<stdio.h>

using namespace std;

// Notes: 003: Variable definition
// Notes: ========================
// Notes:   In C++, you can declare variables the same as C.
// Notes:   In C++, you may declare variables anywhere you want.
// Notes:
// Notes:   In C++, you can declare/define variable inside for loop header.
// Notes:   but, it's scope is same as scope of for loop.
// Notes:

int main(void)
{
  int i;
  int j=5;
  printf("i is %i j is %i \n",i,j);



  for ( i = 0; i < 3; i++ )
  {
    int i = 0;                          // in a new scope, a new i is created
    printf("INSIDE LOOP i is %i\n",i);  // this is the inside i
  }
  printf("After loop i is %i\n",i);



  for ( int l = 0; l < 3; l++ )         // l is created once, at start of loop
  {
    int l = 0;                          // in a new scope, a new l is created
    printf("inside loop l is %i \n",l); // this is the inside l
  }                                     // the inside l goes out of scope and
                                        // is deallocated each time around loop
  printf("After loop l is %i\n", l);


#ifdef BUG
  // this would be a redefinition of l, remember l is local to main
  // l is not local to the loop, many programmers confuse this issue

  for ( int l = 0; l < 3; l++ )         // l is created once, at start of loop
  {
    int l = 0;                          // in a new scope, a new l is created
    printf("inside loop l is %i \n",l); // this is the inside l
  }                                     // the inside l goes out of scope and
                                        // is deallocated each time around loop
  printf("After loop l is %i\n",l);
#endif
}
