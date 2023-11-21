#include <iostream>
#include <cmath>
using namespace std;


class Particle {
    private:
        double x,y,m;
    public:
        Particle (double a, double b, double c) {
            x = a;
            y = b;
            m = c;
        }

        double getX() {
            return x;
        }

        double getY() {
            return y;
        }

        void setX (double newX) {
            x = newX;
        }

        void setY (double newY) {
            y = newY;
        }

        double getWeight() {
            return m*9.8;
        }

        double distanceFromOrigin() {
            return sqrt(x*x + y*y);
        }

        double distanceFrom(Particle pp) {
            return sqrt(pow(x-pp.x,2) + pow(y-pp.y,2));
        }

        void print() {
            cout << "x = " << x << ", y = " << y << ", m = " << m << endl;
        }

};
class ChargedParticle:public Particle {
private:
        int q;
public:
        ChargedParticle(double a, double b, double c, int d):Particle(a,b,c) {
            q = d;
        }
        void setCharge (int charge) {
            q = charge;
        }
        int getCharge () {
            return q;
        }
        void print() {
            Particle::print();
            cout << "Weighted charge q = " << q;
        }
        double electricForce(ChargedParticle p2) {
           return ((1/(4*3.14*8.85*pow(10,-12)))*(abs(q)*abs(p2.q)))/(pow(distanceFrom(p2),2));
        }
        double potential (ChargedParticle p2) {
            return ((1/(4*3.14*8.85*pow(10,-12)))*(abs(q)*abs(p2.q)))/(distanceFrom(p2));
        }

};

int main() {
   /* Particle p(5,5,80), p2 (1,4,200);
   p.setX(7);
   p.print();
   cout << "Distance From Origin = " << p.distanceFromOrigin() << " m" << endl;
   cout << "Distance From Particle p2: d = " <<p.distanceFrom(p2) << " m" << endl; */

   ChargedParticle p(5, 5, 80, 2), p2 (1,2,1,2);
   cout << "The electric force F = " << p.electricForce(p2);
}
