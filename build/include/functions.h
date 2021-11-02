//
// Created by Dylan Furner on 10/28/21.
//

#ifndef FURNERALGO_FUNCTIONS_H
#define FURNERALGO_FUNCTIONS_H
#include <map>
class functions {
public:
    functions();
    ~functions();
    template <typename T>
    void mergeSort(T* toSearch, int size);
    template <typename T>
    void quickSort(T* toSearch, int size);
    template <typename T>
    void insertionSort(int size, T* toSearch, T search);
    template <typename T>
    int linearSearch(T* data, T searchNumber, int size);
    template <typename T>
    int binarySearch(T* arr, int l, int r, T target);
    template <typename T>
    int exponentialSearch(T* arr, int n, int x, int size);
};
#endif //FURNERALGO_FUNCTIONS_H
