#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    int array[200][4];
    ofstream part("particles.txt");

    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = rand() % 10;
            part << array[i][j] << " ";
        }
        part << endl;
    }

    part.close();
}
