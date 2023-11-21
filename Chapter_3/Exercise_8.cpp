#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;

int main()
{
  char st[80], str[85];
  int i=0, a = 0, n = 0, s = 0;
 cout << "Enter a string: ";
 cin.getline (st, 80);
 *strcpy (str, st);

 cout << "The original string is " << st <<endl;
 cout << "The copied string is " << str <<endl;
 cout << "numbers of characters copied = " << strlen(str);
}
