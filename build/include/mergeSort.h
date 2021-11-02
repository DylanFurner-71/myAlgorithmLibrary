//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_MERGESORT_H
#define FURNERALGO_ALGOLIBRARY_MERGESORT_H
#include "Algorithm.h"
#include "vector"
using namespace std;
template <typename T>
class mergeSort : public Algorithm<T>{
public:
    mergeSort(){
        this->name="MergeSort";
    };
    ~mergeSort(){};
    void stats(){

    };
    void select(int choice){

    };
    void save(){

    };
    void configure(){

    };
    void performAlgo(){
        runSort(this->toSearch, 0, this->size - 1);

    };
    void merge(T array, int const left, int const mid, int const right)
    {
        auto const subArrayOne = mid - left + 1;
        auto const subArrayTwo = right - mid;
        auto *leftArray = new int[subArrayOne],
                *rightArray = new int[subArrayTwo];
        for (auto i = 0; i < subArrayOne; i++)
            leftArray[i] = *(array+left + i);
        for (auto j = 0; j < subArrayTwo; j++)
            rightArray[j] = *(array + mid + 1 + j);
        auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
        int indexOfMergedArray = left; // Initial index of merged array
        while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
            if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
                *(array+indexOfMergedArray) = leftArray[indexOfSubArrayOne];
                indexOfSubArrayOne++;
            }
            else {
                *(array+indexOfMergedArray) = rightArray[indexOfSubArrayTwo];
                indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
        }
        // Copy the remaining elements of
        // left[], if there are any
        while (indexOfSubArrayOne < subArrayOne) {
            *(array+ indexOfMergedArray)= leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfMergedArray++;
        }
        // Copy the remaining elements of
        // right[], if there are any
        while (indexOfSubArrayTwo < subArrayTwo) {
            *(array+indexOfMergedArray) = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
            indexOfMergedArray++;
        }
    }
    void runSort(T arr, int begin, int end)
    {
        if (begin >= end) {
            return; // Returns recursively
        }
        auto mid = begin + (end - begin) / 2;
        runSort(arr, begin, mid);
        runSort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
    }
};


#endif //FURNERALGO_ALGOLIBRARY_MERGESORT_H
