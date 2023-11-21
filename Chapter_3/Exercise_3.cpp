#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char *st;
  int i=0;
 cout << "Enter a string: ";
 cin.getline (st, 80);
 cout << "Your entered string is: " << st << endl;;

 cout << "Your string with spaces is: ";
 for (i; i<strlen(st); i++)
 cout << *(st + i) << "\t" ;
}
