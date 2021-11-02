#include "include/searchInterface.h"
searchInterface::searchInterface(){
    this->a = 1;
}
searchInterface::~searchInterface(){
}
void searchInterface::runTests(){
    for (int i = 0; i < this->numAlgos; i++){
        if (i == 0){
            this->algos = new linearSearch<int *>();
        } else if (i == 1){
            this->algos = new binarySearch<int*>();
        } else if (i == 2){
            this->algos = new exponentialSearch<int*>();
        }
        this->load();
        for (int k = 0; k < this->numSteps; k++){
            this->algos->load(vectorsToSort[k], (this->stepSize*k));
            this->times.push_back(this->algos->execute());
//            this->algos->stats();
            this->names.push_back(this->algos->name);
            this->sizes.push_back(this->algos->sizes());
        }
    }
}