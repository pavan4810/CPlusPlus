#include<iostream>
#include<stdio.h>

using namespace std;

int & largest(int& a, int& b)
{
  if ( a > b )
    return a;
  else
    return b;
}

// Notes:
// Notes:   Reference can appear on the LEFT of an assignment statement or
// Notes:   on the RIGHT of an assignment statement.
// Notes:   Also, a reference can be the return value of a function.
// Notes:

#include <iostream.h>

int main(void)
{
  int i = 10;
  int j = 100;

  int x  = largest(i,j);
  int &y = largest(i,j);

  cout << "x is " << x << endl << endl;
  cout << "address of i is " << &i << endl;
  cout << "address of j is " << &j << endl;
  cout << "address of x is " << &x << endl;
  cout << "address of y is " << &y << endl;

  cout << endl;

  cout << "i is " << i << endl;
  cout << "j is " << j << endl;
  largest(i,j)++;
  cout << "i is " << i << endl;
  cout << "j is " << j << endl;
}
