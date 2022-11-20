#include <iostream>
#include <cmath>
#include "Point2D.h"
#include "Vector2D.h"

using namespace N;
using namespace std;

double GetDistanceBetween(Point2D p1, Point2D p2)
{
  double xval = pow((p2.x - p1.x), 2);
  double yval = pow((p2.y - p2.y), 2);
  double distance = sqrt(xval + yval);

  return distance;
}

int main()
{
  Point2D newpoint;
  cout << newpoint.x << " " << newpoint.y;
  return 0;
}
