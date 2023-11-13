#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int array[80], i = 0;
    ifstream north("north.txt"), south("south.txt");
    ofstream comp("compilation.txt");

    while (north >> array [i] || south >> array [i]) // Import north.txt and south.txt 
        i++;

    for (int a = 0; a < i - 1; a++) // Bubble Sort
    {
      for (int b = 0; b < i - 1; b++)
      {
        if (array[b] > array[b+1])
        {
          int c = array[b];
          array[b] = array[b+1];
          array[b+1] = c;
        }
      }
    }

    for (int a = 0; a < i; a++)
      comp << array[a] << " ";

    north.close();  south.close();  comp.close();
    cout << "Your compilation file has been succesfully created.";

    return 0;
}
