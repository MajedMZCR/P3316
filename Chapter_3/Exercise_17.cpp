#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
 char st[80], str[80];
 cout << "Enter a string: ";
 cin.getline (st, 80);

  for (int i = 0; i < strlen (st); i++)
    if (isalpha(st[i]))
       {
        cout << st[i];
       }


    return 0;
}
