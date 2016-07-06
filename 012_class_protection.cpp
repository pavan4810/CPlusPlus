#include<iostream>
#include<stdio.h>

using namespace std;

// Notes:
// Notes: 012: Three sections of a Class
// Notes: ==============================
// Notes:
// Notes:   Public, protected and private are the three sections available
// Notes:   for classes. Each of these sections has different properties
// Notes:   with respect to the visibility of data fields and member functions.
// Notes:
// Notes:   Protected data is visible only in member functions.
// Notes:   Private data is visible only in member functions.
// Notes:   Public Data is visible everywhere.
// Notes:
// Notes:   Protected : Only the children (and their children) are aware that
// Notes:               Base contains protected member.
// Notes:   Private   : No one but Base is aware of private member.
// Notes:   Public    : Everything that is aware of Base is also aware that
// Notes:               Base contains public member.
// Notes:                
// Notes:                
// Notes:   class A 
// Notes:   {
// Notes:     public:
// Notes:               int x;
// Notes:     protected:
// Notes:               int y;
// Notes:     private:
// Notes:               int z;
// Notes:   };
// Notes:   
// Notes:   class B : public A
// Notes:   {
// Notes:               // x is public
// Notes:               // y is protected
// Notes:               // z is not accessible from B
// Notes:   };
// Notes:   
// Notes:   class C : protected A
// Notes:   {
// Notes:               // x is protected
// Notes:               // y is protected
// Notes:               // z is not accessible from C
// Notes:   };
// Notes:   
// Notes:   class D : private A    // 'private' is default for classes
// Notes:   {
// Notes:               // x is private
// Notes:               // y is private
// Notes:               // z is not accessible from D
// Notes:   };
// Notes:

class abc {
  public:
    int a;
    void set_vals(int,int,int); // a public member function to set a
  protected:
    int b;
  private:
    int c;
};

void abc::set_vals(int A, int B, int C)
{
  printf("Address of bound object is %x \n",this);
  printf("Before setting: a = %i \t b = %i \t c = %i \t \n", a,b,c);

  this->a = A;          // public data visible to member function
  this->b = B;          // protected data visible to member function
  this->c = C;          // private data visible to member function

  printf("After setting: a = %i \t b = %i \t c = %i \t \n", a,b,c);
}

int main(void)
{
  abc a1;

  a1.a = 1;

  // b is a protected data field, this line WILL NOT compile
  // a1.b = 2;

  // c is a private data field, this line WILL NOT compile
  // a1.c = 3;

  a1.set_vals(5,6,7);
}

