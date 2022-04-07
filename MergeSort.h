#ifndef MERGESORT_H
#define MERGESORT_H

#include <string>
#include "Sort.h"

class MergeSort: public Sort {
    public:
        void merge(int, int, int);
        void mergeSort(int, int);
        void sort();
};

#endif