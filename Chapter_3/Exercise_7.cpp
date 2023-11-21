#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;

int main()
{
  char st[80];
  int i=0, a = 0, n = 0, s = 0;
 cout << "Enter a string: ";
 cin.getline (st, 80);
 cout << "Your entered string is: " << st << endl;;

 for (i; i<strlen(st); i++)
 {
     if (isdigit (st[i]))
        n++;
     else if (isalpha (st[i]))
        a++;
     else if (ispunct (st[i]))
        s++;
 }
 cout << "The number of digits is: " << n <<endl;
 cout << "The number of letters is: " << a <<endl;
 cout << "The number of punctiations is: " << s <<endl;
}
