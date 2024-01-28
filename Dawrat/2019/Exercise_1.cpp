#include <iostream>
#include <cmath>
using namespace std;

class Point2D {
protected:
  double x;
  double y;

public:
  Point2D (double a, double b) {
    x = a;
    y = b;
  }

  Point2D () {
    x = 0;
    y = 0;
  }

  double distance (Point2D p) {
    return sqrt(pow(p.x - x,2) + pow(p.y - y,2));
  }

  void SetX (double newx) {
    x = newx;
  }

  void SetY (double newy) {
    y = newy;
  }

  int equals (Point2D p) {
    if (x == p.x && y == p.y) return 1;
    else return 0;
  }

  void display () {
    cout << "(" << x << "," << y << ")";
  }
};

class Point3D: public Point2D {
protected:
  double z;
public:
  Point3D (double a, double b, double c) : Point2D (a,b) {
    z = c;
  }

  Point3D () : Point2D() {
    z = 0;
  }

  double distance (Point3D p) {
    return sqrt (pow(Point2D::distance(p),2) + pow(p.z - z,2));
  }

  int equals (Point3D p) {
    if (Point2D::equals(p) && p.z == z) return 1;
    else return 0;
  }
  \
  void display () {
    cout << "(" << x << "," << y << "," << z << ")";
  }


};

int main () {
  Point3D b(1,1,1);
  Point3D a(1,2,3);
  Point3D c;

  b.display();

    cout << a.distance(b);

}
