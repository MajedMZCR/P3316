#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int n;
  float r, A = 0, B = 1;
  cout << "please input an integer n: ";
  cin >> n;
  cout << "please input a real number r: ";
  cin >> r;


  for (int i = 1; i <= n; i++) {
    A += (1.0/n)*pow(r,i-1);
  }
  for (int i = 2; i <= n; i++) {
    B *= 1 - 1.0/(pow(i,2));
  }

  cout << "A = " << A << endl << "B = " << B << endl;
  return 0;
}
