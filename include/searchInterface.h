#ifndef FURNERALGO_ALGOLIBRARY_SEARCHINTERFACE_H
#define FURNERALGO_ALGOLIBRARY_SEARCHINTERFACE_H
#include "SortSearchLibraryInterface.h"
#include "binarySearch.h"
#include "exponentialSearch.h"
#include "insertionSort.h"
#include "linearSearch.h"
class searchInterface : public SortSearchLibraryInterface {
public:
    void runTests();
    searchInterface();
    ~searchInterface();
};
#endif //FURNERALGO_ALGOLIBRARY_SEARCHINTERFACE_H
