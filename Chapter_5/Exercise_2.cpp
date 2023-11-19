#include <iostream>
#include <cmath>
using namespace std;

class Particle {
  private:
    double x,y,z,vx,vy,vz,m;
  public:
    Particle (double a, double b, double c, double d, double e, double f, double g) {
      x = a;
      y = b;
      z = c;
      vx = d;
      vy = e;
      vz = f;
      m = g;
    }
    Particle () {

    }
    double KineticEnergy() {
      return (0.5*m*(vx*vx + vy*vy + vz*vz));
    }
    double distance2Particle(Particle p2) {
      return sqrt(pow(x-p2.x,2) + pow(y-p2.y,2) + pow(z-p2.z,2));
    }
    double getvelocity() {
      return sqrt (vx*vx + vy*vy + vz*vz);
    }
    void print() {
      cout << x << "  "<< y << "  " << z << "  " << vx << "  " << vy << "  " << vz << "  " << m << "  " << endl;
    }
};

Particle* inputDistribution(int n) {
  Particle* array = new Particle[n];

  for (int i = 0; i < n; i++) {
    double x, y, z, vx, vy, vz, m;
    if (i == 0)
      cout << "Enter the data of the 1st particle (x,y,z,vx,vy,vz,m):" << endl;
    else if (i == 1)
      cout << "Enter the data of the 2nd particle (x,y,z,vx,vy,vz,m):" << endl;
    else if (i == 2)
      cout << "Enter the data of the 3rd particle (x,y,z,vx,vy,vz,m):" << endl;
    else
      cout << "Enter the data of the " << i+1 <<"th particle (x,y,z,vx,vy,vz,m):" << endl;
    cin >> x >> y >> z >> vx >> vy >> vz >> m;
    array[i] = Particle(x, y, z, vx, vy, vz, m);
  }
    return array;
}

double kinetic_energy(int n, Particle *pts) {
  double k = 0;
  for (int i = 0; i < n; i++) {
    k += pts[i].KineticEnergy();
  }
  return k;
}

double potential_energy (int n, Particle *pts) {
  double k = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      k += 1/(pow(pts[i].distance2Particle(pts[j]),12)) - 2/(pow(pts[i].distance2Particle(pts[j]),6));
    }
  }
  return k;
}

int main() {
  int n;
  cout << "Enter the number of particles: ";
  cin >> n;

  Particle *mat;
  mat = inputDistribution(n);
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << "Data of particle " << i + 1 << ": ";
    mat[i].print();
    }
    system("cls");
  cout << endl << "The kinetic energy of the " << n << " particles is K = " << kinetic_energy (n,mat) << " J";
  cout << endl << "The potential energy of the " << n << " particles is U = " << potential_energy (n,mat) << " J";
  return 0;
}
