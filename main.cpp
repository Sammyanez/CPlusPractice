#include <iostream>
#include "allFunctions.h"
#include "selectionSort.h"

#include <vector>
using namespace std;
int main() {
    int array[] = {8, 5, 2, 9, 5, 6, 3};
    int n = sizeof(array) / sizeof(array[0]);

    vector<int> vect(array, array + n);

    for (int x : vect)
        cout << x << " ";

    vector<int> vector = selectionSort(vect);

}



