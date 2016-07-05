#include<iostream>
#include<stdio.h>

using namespace std;

// Notes:
// Notes: 010: Using structures
// Notes: =====================
// Notes:   The keyword struct works the same way as in C.
// Notes:   Programmer has direct access to fields of a structure
// Notes:

struct a
{
  int a;                    // a field, legal values are 0 to 10
};


void seta(struct a * sa, int ina)
{
  while ( ina < 0 || ina > 10 )
  {
    printf("%i is invalid, please enter number in range 0,10\n", ina);
    scanf("%i",&ina);
  }
  sa->a = ina;
}

int main(void)
{
  struct a a1;              // create an instance of the data type struct a

  seta(&a1,3);;             // this will call the subroutine that does the error
  printf("field a of a1 is %i \n",a1.a);


  seta(&a1,-7);             // this will call subroutine that does error check
  printf("field a of a1 is %i \n",a1.a);


  // this code shows how a programmer can IGNORE the routine you wrote
  // to put the values into instances of struct a.
  // EVEN THOUGH THERE IS A ROUTINE TO PREVENT THIS, NOTHING ENFORCED IT.
  a1.a = 10;                // programmer has direct access to fields of
                            // variables of type struct a
  printf("field a of a1 is %i \n",a1.a);


  a1.a = -2;                // programmer has direct access to fields of variable
  printf("field a of a1 is %i \n",a1.a);
}
