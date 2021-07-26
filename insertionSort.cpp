//
// Created by Sammy on 7/23/2021.
//
#include <vector>
#include "allFunctions.h"

vector<int> insertionSort(vector<int> array) {
    int length = array.size();
    for (int i =0; i < length; i++){
        if (i != length-1) {
            if (array[i] > array[i+1]) {
                int c = array[i];
                array[i] = array[i+1];
                array[i+1] = c;
            }
        }
        for (int j =i; j >= 0; j--) {
            if (j-1 == -1) {
                break;
            }
            if (array[j] < array[j-1]) {
                int b = array[j];
                array[j] = array[j-1];
                array[j-1] = b;
            } else {
                continue;
            }
        }

    }
    return array;
}
/*
 *  int array[] = {8, 5, 2, 9, 5, 6, 3};
    int n = sizeof(array) / sizeof(array[0]);

    vector<int> vect(array, array + n);

    for (int x : vect)
        cout << x << " ";

    vector<int> vector = insertionSort(vect);
 */