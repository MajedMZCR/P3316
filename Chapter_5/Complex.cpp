#include <iostream>
#include <cmath>
using namespace std;

class Complex{

private:
        int real, imaginary;
public:
        Complex (int a, int b)
        {
            real = a;
            imaginary = b;
        }
        double Modulus()
        {
            return (sqrt(real*real + imaginary*imaginary));
        }
        double Arg()
        {
            return (atan(1.0*imaginary/real));
        }
        void Add (Complex c2)
        {
            real = real + c2.real;
            imaginary = imaginary + c2.imaginary;
        }
        void Sub (Complex c2)
        {
            real = real - c2.real;
            imaginary = imaginary - c2.imaginary;
        }
        void Mul (Complex c2)
        {
            real = real * c2.real - imaginary * c2.imaginary;
            imaginary = real * c2.imaginary + imaginary + c2.real;
        }
        void Div (Complex c2)
        {
            real = (real*c2.real + imaginary*c2.imaginary)/(c2.real*c2.real+c2.imaginary+c2.imaginary);
            imaginary = (imaginary*c2.real - real*c2.imaginary)/(c2.real*c2.real+c2.imaginary+c2.imaginary);
        }
        void Mul (int m)
        {
            real = real * m;
            imaginary = imaginary * m;
        }
        void print ()
        {
            cout << real << " + " << imaginary << "i" << endl;
        }
};
int main()
{
    Complex c1(1,3), c2(2, -1);
    cout<<" c1 : ";
    c1.print();
    cout<<" c2 : ";
    c2.print();
    cout << "c1 = c1 * c2" << endl;

    c1.Mul(c2);
    c1.print();
}
