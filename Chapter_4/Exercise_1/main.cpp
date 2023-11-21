#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream cube ("cube.txt");
    for (int i = 1; i <= 100; i++)
        cube << i << "^3 = " << i*i*i << endl;
    cube.close();
    return 0;
}
