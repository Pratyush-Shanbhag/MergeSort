#include <iostream>
#include "MergeSort.h"

using namespace std;

int main() {
    MergeSort ms;

    ms.readFile("Array.txt");
    ms.displayArray();
    ms.sort();
    ms.displayArray();
    ms.writeFile();
    return 0;
}