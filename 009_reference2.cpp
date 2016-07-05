#include<iostream>
#include<stdio.h>

using namespace std;

void call_by_value ( int x )
{
  cout << "call_by_value received " << x << endl;
  cout << "address of x is " << &x << endl;
  x++;
  cout << "call_by_value generated " << x << endl;
}

void call_by_reference ( int& x )
{
  cout << "call_by_reference received " << x << endl;
  cout << "address of x is " << &x << endl;
  x++;
  cout << "call_by_reference generated " << x << endl;
}

void call_by_pointer ( int* x )
{
  cout << "call_by_pointer received " << x << endl;
  cout << "call_by_pointer points at " << *x << endl;
  cout << "address of x is " << &x << endl;
  *x = *x + 1;
  cout << "call_by_pointer generated " << *x << endl;
}

int main(void)
{
  int i = 1;
  cout << "ADDRESS OF MAIN i IS " << &i << endl;

  cout << "i before call_by_value(i) " << i << endl;
  call_by_value(i);                 // only name of variable is used
  cout << "i after call_by_value(i) " << i << endl << endl;

  cout << "i before call_by_reference(i) " << i << endl;
  call_by_reference(i);             // only name of variable is used
  cout << "i after call_by_reference(i) " << i << endl << endl;

  cout << "i before call_by_pointer(i) " << i << endl;
  call_by_pointer(&i);              // need to generate address of variable
  cout << "i after call_by_pointer(i) " << i << endl << endl;
}
