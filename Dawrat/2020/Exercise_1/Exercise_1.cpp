#include <iostream>
#include <fstream>
using namespace std;

double m1 = 12000, m2 = 10000, m3 = 8000, k1 = 3000, k2 = 2400, k3 = 1800;
int N = 1000, i = 0;

void derive (double *x, double *xp) {
  xp[0] = x[1];
  xp[1] = (-(k1 + k2)/m1)*x[0] + (k2/m1)*x[2];
  xp[2] = x[3];
  xp[3] = (k2/m2)*x[0] - ((k2+k3)/m2)*x[2] + (k3/m2)*x[4];
  xp[4] = x[5];
  xp[5] = (k2/m3)*x[2] - (k3/m3)*x[4];
}

void euler (double *x1, double *x1p, double *x2, double *x2p, double *x3, double *x3p, double *xp, double dt, int i = 0) {
  x1[i+1] = x1[i] + dt*xp[0];
  x1p[i+1] = x1p[i] + dt*xp[1];
  x2[i+1] = x2[i] + dt*xp[2];
  x2p[i+1] = x2p[i] + dt*xp[3];
  x3[i+1] = x3[i] + dt*xp[4];
  x3p[i+1] = x3p[i] + dt*xp[5];
}

int main () {
  double x[6], xp[6], *x1, *x2, *x3, *x1p, *x2p, *x3p, *time, dt = 20.0/N;
  ofstream x1file ("x1.txt"), x2file ("x2.txt"), x3file ("x3.txt"), timefile ("t.txt");

  x1 = new double [N + 1];
  x1p = new double [N + 1];
  x2 = new double [N + 1];
  x2p = new double [N + 1];
  x3 = new double [N + 1];
  x3p = new double [N + 1];
  time = new double [N + 1];

  x1[0] = 0;
  x1p[0] = 1;
  x2[0] = 0;
  x2p[0] = 0;
  x3[0] = 0;
  x3p[0] = 0;

  for (int i = 0; i < N; i++) {
    time[i] = dt*i;
    x[0] =  x1[i];
    x[1] = x1p[i];
    x[2] =  x2[i];
    x[3] = x2p[i];
    x[4] =  x3[i];
    x[5] = x3p[i];
    derive (x, xp);
    euler (x1,x1p,x2,x2p,x3,x3p,xp,dt,i);
  }

  for (int i = 0; i < N; i++) {
    timefile << time[i] << endl;
    x1file << x1[i] << endl;
    x2file << x2[i] << endl;
    x3file << x3[i] << endl;
  }

  timefile.close(); x1file.close(); x2file.close(); x3file.close();
 }
