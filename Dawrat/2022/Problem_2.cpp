#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
using namespace std;

int main () {
  int n = 10000, i = 0, nhit = 0, njhit = 0;
  float xi, yi, xj, yj, zj;

  for (int i = 0; i < n; i++) {
    xi = 2.0*rand()/RAND_MAX;
    yi = 1.0*rand()/RAND_MAX;
    if (yi < exp(-pow(xi,2))) nhit++;
  }
    cout << "The Area Is A = " << (1.0*nhit/n)*2 << endl;

  for (int j = 0; j < n; j++) {
    xj = 1.0*rand()/RAND_MAX;
    yj = 1.0*rand()/RAND_MAX;
    zj = exp(sqrt(2))*(1.0*rand()/RAND_MAX);
    if (zj < xj*yj*exp(sqrt(xj+yj))) njhit++;

  }
  cout << "The volume is V = " << (1.0*njhit/n)*exp(sqrt(2)) << endl;


  int firstvalue, secondvalue;
  int * p1, * p2;
  p1 = &firstvalue;
  p2 = &secondvalue;
  *p1 = 10;
  *p2 = *p1;
  p1 = p2;
  *p1 = 20;

  cout << "firstvalue is " << firstvalue << endl;
  cout << "secondvalue is " << secondvalue << endl;




}
