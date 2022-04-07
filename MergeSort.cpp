#include <iostream>
#include "MergeSort.h"

using namespace std;

void MergeSort::merge(int lindex, int midindex, int rindex) {

}

void MergeSort::mergeSort(int lindex, int rindex) {
    if(lindex < rindex) {
        int midindex = (lindex + rindex) / 2;
        mergeSort(lindex, midindex);
        mergeSort(midindex + 1, rindex);
        merge(lindex, midindex, rindex);
    }
}

void MergeSort::sort() {

}