#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    int array[200][4], i = 0, j = 0, z = 0;
    ifstream part("particles.txt");
    ofstream parts("parts.txt");

    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            part >> array[i][j];
        }
    }

    for (i = 0; i < 200; i++)
    {
        for (j = 0; j < 4; j++)
        {
            z = sqrt((array[i][1] * array[i][1]) + (array[i][2] * array[i][2]) + (array[i][3] * array[i][3]));
            cout << z << endl;
            if (z <= 10)
            {
                parts << array[i][j] << " ";
            }
        }
        parts << endl;
    }

    part.close();
    parts.close();

    return 0;
}
