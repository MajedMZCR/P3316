#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main () {
  int n = 10000, i = 0, j = 0;
  long niHit = 0, njHit = 0;
  double xi,yi,xj,yj,zj,A,V;

  // First Integral
  for (i = 0; i < n; i++) {
    xi = 1.0*(rand()/RAND_MAX) + 1;
    yi = 1.0*(log(2)/2)*(rand()/RAND_MAX);
    if (yi < log(xi + 2)/(xi + 2)) niHit++;
  }
  A = (niHit/n) * log(2)/2;
  cout << "The Area Under The First Curve Is: " << A << endl;

  // Second Intgral
  for (j = 0; j < n; j++) {
    xj = 3.14*(rand()/RAND_MAX);
    yj = 3.14*(rand()/RAND_MAX);
    zj = (1.0*sqrt(3.14)+2.0)*(1.0*rand()/RAND_MAX);
    if (zj < (sqrt(xj)*cos(xj*yj)+2.0)) njHit++;
  }
  V = (1.0*njHit/n)*(sqrt(3.14)*cos(0)+2)*3.14*3.14;
  cout << njHit << endl << "The Volume Under The Second Curve Is: " << V << endl;
}
