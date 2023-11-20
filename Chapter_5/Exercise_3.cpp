#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
  float x,y;

public:
  Point (float a, float b) {
    x = a;
    y = b;
  }
  void Display () {
    cout << "x = " << x << " | y = " << y;
  }
  float Getabs() {
    return x;
  }
  float Getord() {
    return y;
  }
  void Transcenter(float XX, float YY) {
    x = XX;
    y = YY;
  }
  float Getdist (Point p2) {
    return sqrt(pow(x - p2.x, 2) + pow(y - p2.y,2));
  }
};

class Pixel2D:public Point {
private:
  int color;
public:
  Pixel2D (float a, float b, float c):Point(a,b) {
    color = c;
  }
  int GetColor () {
    return color;
  }
  void Display () {
    Point::Display();
    cout << " | Color = " << color;
  }
  void ChgColor (int rr) {
    color = rr;
  }
};

int main () {
  Pixel2D p1(1,1,2), p2(3,5,4);
  p2.ChgColor (10);
  p2.Display();
  cout << endl << p1.Getdist(p2);
  return 0;
}
