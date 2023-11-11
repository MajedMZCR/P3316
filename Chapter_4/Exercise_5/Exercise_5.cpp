#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main()
{
    char array[80];
    ifstream in("input.txt");
    ofstream out("output.txt");

    while (in.getline(array, 80))
    {
        cout << array << endl;
        for (int i = 0; i < 80 ; i++)
          array[i] = toupper (array[i]);
        out << array << endl;
    }

    in.close();
    out.close();

    return 0;
}
