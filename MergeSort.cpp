#include <iostream>
#include "MergeSort.h"

using namespace std;

void MergeSort::merge() {

}

void MergeSort::mergeSort(int lindex, int rindex) {
    if(lindex < rindex) {
        int midindex = (lindex + rindex) / 2;
        mergeSort(lindex, midindex);
        mergeSort(midindex + 1, rindex);
        merge();
    }
}

void MergeSort::sort() {

}