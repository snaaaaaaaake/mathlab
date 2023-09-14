#include "math.h"
#include <cmath>
#include <iostream>

using std::cout, std::endl;

double mathlab::sin(double x)
{
  cout << "user-def sin" << endl;
  return std::sin(x);
}

double mathlab::cos(double x)
{
  cout << "user-def cos" << endl;
  return std::cos(x);
}

double mathlab::sqrt(double x)
{
  cout << "user-def sqrt" << endl;
  return std::sqrt(x);
}


  
