#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char st[80];
  int i=0, m=0;
 cout << "Enter a string: ";
 cin.getline (st, 80);
 cout << "Your entered string is: " << st << endl;;


 for (i=0; i<strlen(st); i++)
 {
  if (*(st + i) == ' ')
  {
    m++;
  }
 }
   cout << "The number of words is:  " << m+1;
}
