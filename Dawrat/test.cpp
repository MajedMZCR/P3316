#include <iostream>
#include <ctype.h>
#include <cstring>

using namespace std;

void findfact (int n, int *fact) {
for (int i = 1; i <=n; i++) {
  *fact *= i;
}

}

int main () {

int n, one = 1, *fact = &one;
cin >> n;
findfact (n, fact);
cout << *fact;


























return 0;

}
