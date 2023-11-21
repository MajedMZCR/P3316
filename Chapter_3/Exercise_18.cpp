#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
 char st[80], s;
 cout << "Enter a string: ";
 cin.getline (st, 80);
 cout << "What character do you want to search for: ";
 cin >> s;
 int x = 0;

 for (int i = 0; i < strlen (st); i++)
 {
        if (st[i] == s)
                    x++;
 }
 cout << s << " is present " << x << " times";
    return 0;
}
