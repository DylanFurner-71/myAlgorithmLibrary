//
// Created by Dylan Furner on 9/16/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_DRIVER_H
#define FURNERALGO_ALGOLIBRARY_DRIVER_H
#include <vector>
#include "SortSearchLibraryInterface.h"
#include "sortInterface.h"
#include "searchInterface.h"
using namespace std;
class Driver {
private:
   SortSearchLibraryInterface* a1;
   const int numClasses = 3;
public:
Driver();
~Driver();
void Drive(bool verbose);
};


#endif //FURNERALGO_ALGOLIBRARY_DRIVER_H
