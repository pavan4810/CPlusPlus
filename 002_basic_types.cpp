#include<iostream>
#include<stdio.h>

using namespace std;

// Notes: 002: Data types
// Notes: ===============
// Notes:   In C++, you can still use C data types, comments, variables,
// Notes:   decisions and loops.
// Notes:

int main(void)
{
  // can still use C data types.
  int i = 21;
  float f = 3.0;
  char c = 'P';
  double d = 99.94;
  char firstName[10] = {'P', 'a', 'v', 'a', 'n'};
  // warning: deprecated conversion from string constant to ‘char*’
  char *lastName = (char *)"Avala";

  cout << "i = " << i << " f = " << f << " c = " << c << " d = " << d << endl;
  cout << "firstName = " << firstName << endl;
  cout << "lastName  = " << lastName << endl;

  string name = "Pavan Kumar Avala";
  cout << "Name      = " << name << endl;
}
