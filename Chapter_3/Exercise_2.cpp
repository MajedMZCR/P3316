#include <iostream>

using namespace std;

int main()
{
  char *st;
  int i=0;
 cout << "Enter a string: ";
 cin.getline (st, 80);
 cout << "Your entered string is: " << st << endl;;

 do {
        i++;
    }while (*(st+i)!='\0');
    cout << "The size of your string is: " << i;
}
