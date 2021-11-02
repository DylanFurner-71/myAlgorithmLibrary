#ifndef FURNERALGO_ALGOLIBRARY_SORTINTERFACE_H
#define FURNERALGO_ALGOLIBRARY_SORTINTERFACE_H
#include <random>
#include "SortSearchLibraryInterface.h"
#include "Algorithm.h"
#include <vector>
#include "insertionSort.h"
#include "sortInterface.h"
#include "mergeSort.h"
#include "quickSort.h"
class sortInterface : public SortSearchLibraryInterface {
public:
    sortInterface();
    ~sortInterface();
    void runTests();
};


#endif //FURNERALGO_ALGOLIBRARY_SORTINTERFACE_H
