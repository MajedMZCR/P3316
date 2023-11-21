#include <iostream>
#include <fstream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");

    int j = 0;
    char st[80];

    while (!in.eof())
    {
        in.getline(st,80);
        cout << st;
        for (int i = 0; i < strlen (st) - 2; i++)
        {
        if (st[i] == 'a' || st[i] == 'A')
        {
            if (st [i + 1] == 'n' || st[i + 1] == 'N')
            {
                if (st [i + 2] == 'd' || st [i + 2] == 'D')
                    j++;

            }
        }
        }
    }
    out << j;
    in.close();
    out.close();
    return 0;
}
