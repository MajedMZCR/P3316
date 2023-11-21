#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
 char st[80];
 cout << "Enter a string: ";
 cin.getline (st, 80);

 int j = 0;

 for (int i = 0; i < strlen (st) - 2; i++)
 {
     if (st[i] == 't' || st[i] == 'T')
     {
         if (st [i + 1] == 'h' || st[i + 1] == 'H')
         {
             if (st [i + 2] == 'e' || st [i + 2] == 'E')
                j++;

         }
     }
 }

 cout << "The is present " << j << " times";

    return 0;
}
