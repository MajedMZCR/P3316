#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;

int main()
{
  char st[80];
  int i=0, v = 0, c = 0;
 cout << "Enter a string: ";
 cin.getline (st, 80);

 for (i; i<strlen(st); i++)
 {
     if (isalpha (st[i]))
     {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
            v++;
        else
            c++;
     }

 }
  cout << "The number of vowels is: " << v << endl;
  cout << "The number of consonants is: " << c;
}
