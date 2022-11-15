#include "Vector2D.h"
#include <iostream>

using namespace std;
using namespace N;

Vector2D::Vector2D()
{
  x = 0.0;
  y = 0.0;
}

Vector2D::Vector2D(double in_x, double in_y)
{
  x = in_x;
  y = in_y;
}
