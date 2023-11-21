#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
 char st [80];

cout << "Please enter your string: " << endl;
cin.getline (st, 80);
int z = strlen (st);

for (int i = 0; i < z; i++)
  for (int j = 0; j < z; j++)
    if (st[i] < st[j])
      {
        int a = st[i];
        st[i] = st[j];
        st[j] = a;
      }

  cout << "Your string sorted in alphabetical order is: " << st;

  return 0;
}
