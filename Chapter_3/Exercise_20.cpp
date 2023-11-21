/* 20. Write a program in C++ to find the largest and smallest word in a string.
Input the string : It is a string with smallest and largest word.
Expected Output :
The largest word is 'smallest'
and the smallest word is 'a'
in the string : 'It is a string with smallest and largest word.' */

#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
 int Max = 0, Min = 80, c = 0, j = 0;
 char st[80];
 cout << "Enter a string: ";
 cin.getline (st, 80);

 for (int i = 0; i < strlen (st); i++)
 {
    if (st[i] != ' ')
    {
        c++;
        if (c > Max)
        {
            Max = c;
            j = i;
        }
    }
    else
    {
        if (c > Max)
        {
            Max = c;
            j = i;
        }

        c = 0;
    }
 }
     cout << "The largest word is: ";
     for (int k = (j - Max) ; k < (j + 1); k++)
        cout << st[k];
    return 0;
}
