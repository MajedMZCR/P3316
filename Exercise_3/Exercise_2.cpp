#include <iostream>
#include <fstream>
using namespace std;

double k = 200, m = 40;
int n = 10000, i = 0;

void derive (double *x, double *xp) { // derive function
  xp[0] = x[1];
  xp[1] = (k/m) * (-2*x[0] + x[2]);
  xp[2] = x[3];
  xp[3] = (k/m) * (x[0] - 2*x[2]);
}

void euler (double *y1, double *y1p, double *y2, double *y2p, double *xp, double dt, int i) { // Euler's Method Of ODE's
  y1[i+1] = y1[i] + dt*xp[0];
  y1p[i+1] = y1p[i] + dt*xp[1];
  y2[i+1] = y2[i] + dt*xp[2];
  y2p[i+1] = y2p[i] + dt*xp[3];
}

int main () {
  double x[4], xp[4], *y1, *y2, *y1p, *y2p, *time,  ti = 0, tf = 20, dt = (tf-ti)/n;
  ofstream y1file ("y1.txt"), y2file ("y2.txt"), timefile ("time.txt");

  y1 = new double [n+1];
  y1p = new double [n+1];
  y2 = new double [n+1];
  y2p = new double [n+1];
  time = new double [n+1];

  y1[0] = 2;
  y1p[0] = 0;
  y2[0] = 3;
  y2p[0] = 0;

  for (i = 0; i < n; i++) {
    time[i] = i*dt;
    x[0] = y1[i];
    x[1] = y1p[i];
    x[2] = y2[i];
    x[3] = y2p[i];
    derive (x,xp);
    euler(y1, y1p, y2, y2p, xp, dt, i);
  }

  for (i = 0; i < n; i++) {
    timefile << time[i] << endl;
    y1file << y1[i] << endl;
    y2file << y2[i] << endl;
  }

  timefile.close();
  y1file.close();
  y2file.close();

  return 0;
}
