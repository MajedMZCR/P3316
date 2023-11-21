#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
 char st[80], str[80];
 cout << "Enter a string: ";
 cin.getline (st, 80);
 int dummy = 0;
 char p;

 for (int i = 0; i < strlen (st); i++)
 {
    int x = 0;
    for (int j = 0; j < strlen (st); j++)
        {
            if (i != j)
            {
                if (st[i] == st[j])
                    x++;
                if (x > dummy)
                    {
                    dummy = x;
                    p = st[i];
                    }
            }
        }
 }
 cout << "The most occuring letter is " << p << ". It is present " << dummy + 1<< " times";
    return 0;
}
