#include<iostream>
#include<stdio.h>

// Notes: 008: Default Arguments
// Notes: ======================
// Notes:   C++ allows you to write functions that have default arguments.
// Notes:   This is handy when you want to call a function that needs four
// Notes:   arguments but two or three of them are almost always the same.
// Notes:
// Notes:   Any arguments that you do supply to a function with default args
// Notes:   will fill in the argument list fields from left to right.
// Notes:

using namespace std;

void func1(int = 1);
void func2(int, int = 2);
void func3(int, int, int = 3);
void func4(int = 1, int = 2, int = 3, int = 4);

int main(void)
{

  int i = 100, j = 200, k = 300, l = 400;

  func1();
  func1(i);
  func1(j);
  cout << endl;


  // func2(); THIS WOULD BE A COMPILER ERROR. Can you answer why?
  func2(i);
  func2(i,j);
  cout << endl;


  // BOTH OF THESE WOULD BE COMPILER ERRORS. Can you answer why?
  // func3();
  // func3(i);
  func3(i,j);
  func3(i,j,k);
  cout << endl;


  func4();
  func4(i);
  func4(i,j);
  func4(i,j,k);
  func4(i,j,k,l);
  cout << endl;
}

void func1( int a )
{
  cout << "a is " << a << endl;
}

void func2( int a, int b )
{
  cout << "a is " << a << " b is " << b << endl;
}

void func3( int a, int b, int c )
{
  cout << "a is " << a << " b is " << b << " c is " << c << endl;
}

void func4( int a, int b, int c, int d )
{
  cout << "a is " << a << " b is " << b << " c is " << c << " d is " << d << endl;
}
