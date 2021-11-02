//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_SORTSEARCHLIBRARY_H
#define FURNERALGO_ALGOLIBRARY_SORTSEARCHLIBRARY_H
#include "Algorithm.h"
#include <vector>
#include <string.h>

class SortSearchLibraryInterface {
protected:
    int stepSize = 150000;
    vector<double> times;
    vector<string>names;
    Algorithm<int*>* algos;
    vector<int*> vectorsToSort;
    const int numSteps = 10;
    int numAlgos = 3;
    vector<int> sizes;
    int a;
public:
    SortSearchLibraryInterface() { };
    ~SortSearchLibraryInterface() { };
    virtual void runTests() = 0;
    void printResults(){
            cout<<"Size of N --------"<<names[0]<<"-------|||||||-------"<<names[11]<<"-----------|||||||||||-----------"<<names[21]<<endl;
            cout<<"n"<<"time in microseconds:"<<endl;
            for (int i = 0; i < this->sizes.size(); i++){
                cout<<sizes[i]<<","<<to_string(times[i])<<","<<times[i+10]<<","<<times[20+i]<<endl;
            }
    }
    void resultsToCSV(){

    };
    void load(){
        if (this->a == 0) {
            for (int k = 1; k < this->numSteps + 1; k++) {
                int *toSort = new int[(k * this->stepSize) + 1];
                for (int i = 0; i < (k * this->stepSize); i++) {
                    *(toSort + i) = (((rand() % (k * this->stepSize))));
                }
                this->vectorsToSort.push_back(toSort);
            }
        } else {
            for (int k = 1; k < this->numSteps + 1; k++) {
                int *toSort = new int[(k * this->stepSize) + 1];
                for (int i = 0; i < (k * this->stepSize); i++) {
                    *(toSort + i) = i;
                }
                this->vectorsToSort.push_back(toSort);
            }
        }
    }
};
#endif //FURNERALGO_ALGOLIBRARY_SORTSEARCHLIBRARY_H
