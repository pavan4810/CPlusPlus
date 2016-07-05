#include<iostream>
#include<stdio.h>

// Notes: 009: Concept of reference
// Notes: =========================
// Notes:
// Notes:   C++ introduces the concept of a reference.
// Notes:   A reference IS NOT a pointer, it has no memory of its own.
// Notes:   A pointer is a pointer, it has memory of its own in which it
// Notes:   stores the address of the thing it is pointing at
// Notes:

using namespace std;

int main(void)
{
  int a = 1;                // a is an integer, it has its own memory

  int &c = a;               // c is NOT an integer, it does not have memory
                            // the syntax int & identifies c as a reference

  int *ptr = &a;            // ptr is a pointer to an integer
                            // it has the address of a stored in it

  cout << "value of a is " << a << endl;
  cout << "value of c is " << c << endl;
  cout << "value of ptr is " << ptr << endl << endl;

  cout << "address of a is " << &a << endl;
  cout << "address of c is " << &c << endl;
  cout << "address of ptr is " << &ptr << endl << endl;

  a = 3; // this changes the value of a
  cout << "value of a is " << a << endl;
  cout << "value of c is " << c << endl;
  cout << "value of *ptr is " << *ptr << endl << endl;

  c = 7; // this also changes the value of a
  cout << "value of a is " << a << endl;
  cout << "value of c is " << c << endl;
  cout << "value of *ptr is " << *ptr << endl << endl;

  *ptr = -32; // this also changes the value of a
  cout << "value of a is " << a << endl;
  cout << "value of c is " << c << endl;
  cout << "value of *ptr is " << *ptr << endl << endl;
}
