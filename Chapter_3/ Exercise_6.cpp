#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char st[80], str[80];
  int i=0, m=0;
 cout << "Enter the first string: ";
 cin.getline (st, 80);
 cout << "Enter the second string: ";
 cin.getline (str, 80);


 do {
        i++;
    }while (*(st+i)!='\0');
 do {
        m++;
    }while (*(str+m)!='\0');

 if (i>m)
    cout << endl << "The first string is bigger than the second string";
 if (i<m)
    cout << endl << "The first string is smaller than the second string";
 if (i==m)
    cout << endl << "The first string is equal to the second string";
}
