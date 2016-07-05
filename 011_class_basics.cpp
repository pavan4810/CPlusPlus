#include<iostream>
#include<stdio.h>

using namespace std;

// Notes:
// Notes: 011: Class instead of Struct
// Notes: ============================
// Notes:
// Notes:   The keyword private indicates that the field listed in the private
// Notes:   area can only be manipulated by the functions listed in the public
// Notes:   area the programmer does not have direct access to the fields in the
// Notes:   private area only the coder of the class has access to the fields
// Notes:   If the user wants to put a value in field a,
// Notes:   they HAVE to go through the member function seta.
// Notes:
// Notes:   Format "return class::function(arguments)"
// Notes:

class a {
  private:
    int a;                      // a field, legal values are 0 to 10
  public:
    void seta(int );            // a public member function to set a
    void printa(void);          // a public member function to print a
};

void a::seta(int ina)
{
  while ( ina < 0 || ina > 10 )
  {
    printf("%i is invalid, please enter number in range 0,10\n", ina);
    scanf("%i",&ina);
  }

  // this was the pointer that got the address of the INVOKING variable
  this->a = ina;
}

void a::printa(void)
{
  printf("The value of field a is %i\n",this->a);
  return;
}


int main(void)
{
  // when declaring variables that are of a user defined class,
  // the keyword class is not required
  // create an instance of the data type class a
  a a1; 


  // these first two sections use the variable a1 in conjunction with
  // the subroutine seta that was designed to error check values going
  // into an instance of a struct a
  // this will call the subroutine that does the error
  a1.seta(3);


  // checking for the value you want to put in a1
  // because the field a is private, you can't print it from this code
  // it is only available to member functions of the class
  // this we have to use the member function printa
  // printf("field a of a1 is %i \n",a1.a);
  a1.printa();
  a1.seta(-7); // this will call subroutine that does error check
  a1.printa();


  // these lines will not compile, because a is a private field
  // the error checking that you built into seta is ENFORCED
  // remove the #if 0 and the #endif from the code and try to compile
  // you will see the compiler error
  // a::a is not accessible in function main()
#if 0
  a1.a = 10;
  a1.a = -2;
#endif
}

