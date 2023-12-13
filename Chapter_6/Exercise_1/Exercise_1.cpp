#include <iostream>
#include <fstream>

using namespace std;

double k = 2, m = 3;
int n = 10000, i = 0;

void derive (double *x, double *xp) { // Function to create ODE
  xp[0] = x[1];
  xp[1] = (-k/m)*x[0];
}

void euler (double *y, double *yp, double *xp, double dt, int i) { // Euler's Method Of ODE's
  y[i+1] = y[i] + dt*xp[0];
  yp[i+1] = yp[i] + dt*xp[1];
}

int main () {
  double x[2], xp[2], *y, *yp, *time, ti = 0, tf = 100, dt = (tf-ti)/n; // Declare Variables
  ofstream yfile ("y.txt"), ypfile ("yp.txt"), timefile ("time.txt");

  y =  new double [n+1];
  yp = new double [n+1];
  time = new double [n+1];
  y[0] = 0.01;
  yp[0] = 0;

  for (i = 0; i < n; i++) {
    time[i] = i*dt;
    x[0] = y[i];
    x[1] = yp[i];
    derive (x,xp);
    euler (y, yp, xp, dt, i);

  }
  for (i = 0; i < n; i++) {

    timefile << time[i] << endl;
    yfile << y[i] << endl;
    ypfile << yp[i] << endl;
  }


  cout << "Your files have been successfully created and filled!";
}
