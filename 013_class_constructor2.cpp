#include<iostream>
#include<stdio.h>

using namespace std;

// Notes:
// Notes:   Need to have No Argument version of constructor method.
// Notes:   This is using C++ polymorphism of constructors.
// Notes:

class abc {
  public:
    int a;
    void set_vals(int, int, int);
    void print_vals();

    abc(int, int, int);
    abc();
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

abc::abc()
{
  a = 1;
  b = 2;
  c = 3;
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

  abc a2;
  a2.print_vals();
}

