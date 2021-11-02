//
// Created by Dylan Furner on 9/17/21.
//
#ifndef FURNERALGO_ALGOLIBRARY_EXPONENTIALSEARCH_H
#define FURNERALGO_ALGOLIBRARY_EXPONENTIALSEARCH_H
#include "Algorithm.h"
#include "binarySearch.h"

template <typename T>
class exponentialSearch : public Algorithm<T> {
public:
    binarySearch<T> b;
    int searchNumber = 0;
    int count = 0;
    exponentialSearch() {
        this->name = "Exponential Search";
        binarySearch<T> b;
//        this->searchNumber = random() % this->size;
    };
    ~exponentialSearch() {};
    int exponential(int* arr, int n, int x){
        if (arr[0] == x) {
            return 0;
        }
        int i = 1;
        while (i < n && arr[i] <= x){
            i = i*2;}
        return this->b.binarySearchRecX(arr, i/2,min(i, this->size-1), this->searchNumber);
    }
    void performAlgo() {
        this->searchNumber = (rand() % this->size) + 1;
        this->count++;
        int result = exponential(this->toSearch, 0, this->size-1);
//        if (result == -1) {
//            {
//                cout << "The number " << this->searchNumber << " was not found in the array." << endl;
//            }
//        } else {
//            cout << "The number" << this->searchNumber << "was found in the array."<<endl;
//        }
    };
    void stats(){
//        cout<<"The search number was "<<this->searchNumber<<endl;
    }
    void save() {

    }

    void configure() {

    }

    void select(int choice) {
    }

protected:
};

#endif //FURNERALGO_ALGOLIBRARY_EXPONENTIALSEARCH_H
