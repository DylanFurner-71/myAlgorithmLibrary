#include "include/sortInterface.h"

sortInterface::sortInterface(){
    this->a = 0;
}
sortInterface::~sortInterface(){
}

void sortInterface::runTests(){
    for (int i = 0; i <this->numAlgos; i++){
        if (i == 0){
            algos = new insertionSort<int *>();
        } else if (i == 1){
            algos = new quickSort<int*>();
        } else if (i == 2){
            algos = new mergeSort<int *>();
        }
        this->load();
        for (int k = 0; k < this->numSteps; k++){
            this->algos->load(vectorsToSort[k], (5000*k));
            this->times.push_back(this->algos->execute());
//            this->algos->stats();
            this->names.push_back(this->algos->name);
            this->sizes.push_back(this->algos->sizes());
        }
    }
}