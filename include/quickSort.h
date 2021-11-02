//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_QUICKSORT_H
#define FURNERALGO_ALGOLIBRARY_QUICKSORT_H

#include "Algorithm.h"
#include <vector>
using namespace std;
template <typename T>
class quickSort : public Algorithm<T>{
protected:
    void swap(int* a, int* b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
    int partition (T arr, int low, int high)
    {
        int pivot = *(arr + high); // pivot
        int i = (low - 1); // Index of smaller element

        for (int j = low; j <= high- 1; j++)
        {

            if (*(arr+j)<= pivot)
            {
                i++; // increment index of smaller element
                swap((arr+i), (arr +j));
            }
        }
        swap((arr + i + 1), arr+high);
        return (i + 1);
    }
    void quickSortAlgo(T arr, int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);
            quickSortAlgo(arr, low, pi - 1);
            quickSortAlgo(arr, pi + 1, high);
        }
    }
public:
    quickSort(){
        this->name="Quicksort";
    };
    ~quickSort(){
    };
    void performAlgo(){

        quickSortAlgo( this->toSearch, 0, this->size-2);
    };
    void stats(){

    }
    void save(){

    }
    void configure(){

    }
    void select(int choice){
        cout<<"Your choice is: "<<choice<<endl;
    }
protected:

};
#endif //FURNERALGO_ALGOLIBRARY_QUICKSORT_H
