#include<iostream>
#include<stdio.h>

using namespace std;

// Notes:
// Notes: 013: Class CONSTRUCTOR
// Notes: ======================
// Notes:   CONSTRUCTOR is a method to assign initial values to an instance
// Notes:   a class.
// Notes:
// Notes:   The name of the CONSTRUCTOR function must match the name of
// Notes:   the class, the implied, default and in fact only possible
// Notes:   return type for a CONSTRUCTOR function is a variable of the
// Notes:   class to which the constructor function belongs.
// Notes:
// Notes:
// Notes:

class abc {
  public:
    int a;
    void set_vals(int, int, int);
    void print_vals();

    abc(int, int, int);
  protected:
    int b;
  private:
    int c;
};

// Compare set_vals and constructor methods.
abc::abc(int A, int B, int C)
{
  a = A;
  b = B;
  c = C;
}

void abc::print_vals()
{
  printf("a = %i \t b = %i \t c = %i \n", this->a, this->b, this->c);
}

void abc::set_vals(int A, int B, int C)
{
  this->a = A;
  this->b = B;
  this->c = C;
}

int main(void)
{
  abc a1(5,6,7);
  a1.print_vals();

  // Following gives compilation error.
  //abc a2;
  //a2.print_vals();
}

