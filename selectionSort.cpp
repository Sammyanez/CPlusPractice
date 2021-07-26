//
// Created by Sammy on 7/26/2021.
//

#include "selectionSort.h"


vector<int> selectionSort(vector<int> array){
    for (int i = 0; i < array.size(); i++) {
            int smallest = array[i];
            int smallestIndx = i;
            for (int j = i + 1; j < array.size(); j++) {
                if (smallest > array[j]) {
                    smallest = array[j];
                    smallestIndx = j;
                }
            }
            int temp = array[i];
            array[i] = array[smallestIndx];
            array[smallestIndx] = temp;


    }
    return array;
}
