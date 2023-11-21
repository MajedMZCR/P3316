#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ofstream random("random.txt");
    for (int i = 0; i < 200; i++)
    {
        int a = rand () % 100;
        if (a <= 50)
        random << a << endl;
    }
       random.close();

    return 0;
}
