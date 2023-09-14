#include "math.h"
#include <cmath>
#include <iostream>

double mathlab::sin(double x)
{
  std::cout << "user-def sin" << std::endl;
  return std::sin(x);
}

double mathlab::cos(double x)
{
  std::cout << "user-def cos" << std::endl;
  return std::cos(x);
}

double mathlab::sqrt(double x)
{
  std::cout << "user-def sqrt" << std::endl;
  return std::sqrt(x);
}


  
