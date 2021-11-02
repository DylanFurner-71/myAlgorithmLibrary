//
// Created by Dylan Furner on 10/28/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_H
#define FURNERALGO_ALGOLIBRARY_H

#include <string>
#include <vector>
#include "Algorithm.h"
#include "Driver.h"
#include <iostream>
#include <fstream>
template <typename T>
void mySwap(T& a, T& b)
{
    T t = a;
    a = b;
    b = t;
}
template <typename T>
int partition (T arr[], int low, int high)
{
    T t;
    int i = low;
    int j = high+1;
    T v0 = arr[low];
    T v1 = arr[(low+high+1)/2];
    T v2 = arr[high];
    T pivot = v0<v1 ? v1 < v2? v1:v0 < v2 ? v2 : v0: v0 <v2 ? v0 : v1 < v2 ? v2 : v1;
    while (i < j){
        while (arr[i] < pivot && ++i < j);
        while (pivot < arr[j] && i < --j);
        if (i >= j) break;
        t = arr[j];
        arr[j] = arr[i];
        arr[i] = t;
    }
    arr[i] = pivot;
//    t = arr[low];
//    arr[low] = arr[j];
//    arr[j] = t;
    return j;
//    int pivot = (arr[(high+low+1)/2]); // pivot
//    int i = (low-1); // Index of smaller element
//    for (int j = low; j <= high- 1; j++)
//    {
//
//        if ((arr[j]) <  pivot)
//        {
//            i++; // increment index of smaller element
//            mySwap(arr[i], (arr[j]));
//        }
//    }
//    mySwap((arr[i + 1]), arr[high]);
//    return (i + 1);
}
template <typename T>
void merge(T array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
    auto *leftArray = new int[subArrayOne],
    *rightArray = new int[subArrayTwo];
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
    indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            (array[indexOfMergedArray] = leftArray[indexOfSubArrayOne]);
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
namespace algoLibrary {
    //
// Created by Dylan Furner on 10/28/21.
//
    using namespace std;

    void runAllTests(){
        chrono::steady_clock::time_point start = chrono::steady_clock::now();
        srand((unsigned) time(NULL));
        Driver d1;
        d1.Drive(true);
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
                end - start); //time to execute algo + small if statement
        std::cout << time1.count() << std::endl;
    }
    template <typename T>
    void runSort(T arr[], int begin, int end)
    {
        if (begin >= end) {
            return; // Returns recursively
        }
        auto mid = begin + (end - begin) / 2;
        runSort(arr, begin, mid);
        runSort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
    }
    template <typename T>
    void mergeSort(T toSearch[], int size, bool timed = 0){
        if (timed){
            chrono::steady_clock::time_point start = chrono::steady_clock::now();
            runSort(toSearch, 0, size - 1);
            chrono::steady_clock::time_point end = chrono::steady_clock::now();
            std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
                    end - start); //time to execute algo + small if statement
            std::cout << "merge sort"<<time1.count() << std::endl;
        }
        runSort(toSearch, 0, size - 1);
    }

    template <typename T>
    void quickSortAlgo(T arr[], int low, int high)
    {
        while (low < high){
            int j = partition(arr, low, high);
            if (j - low < high - j){
                quickSortAlgo(arr, low, j-1);
                low = j+1;
            } else {
                quickSortAlgo(arr, j+1, high);
                high = j-1;
            }
        }
    }
    template <typename T>
    void quickSort1(T toSearch[], int size, bool timed = 0){
        if (timed){
            chrono::steady_clock::time_point start = chrono::steady_clock::now();
            quickSortAlgo(toSearch, 0, size-1);
            chrono::steady_clock::time_point end = chrono::steady_clock::now();
            std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
                    end - start); //time to execute algo + small if statement
            std::cout <<"Quicksorttime"<< time1.count() << std::endl;
        } else {
            quickSortAlgo(toSearch, 0, size-1);
        }
    }
    template <typename T>
    T insertionSortUtil(int size, T A) {
//        int k, j;
//        T tmp;// = new T[size];
//        int N = size;
//        for (k = 1; k < N; k++) {
//            tmp = A[k];
//            j = k - 1;
//            while ((j >= 0) && (A[j].compareTo(tmp) > 0)) {
//                A[j+1] = A[j]; // move one value over one place to the right
//                j--;
//            }
//            A[j + 1] = tmp; // insert kth value in correct place relative to previous
//            // values
//        }
    }

    template <typename T>
    T insertionSort(int size, T arr, bool timed = 0) {
        if (timed==true){
            chrono::steady_clock::time_point start = chrono::steady_clock::now();
            insertionSortUtil(size, arr);
            chrono::steady_clock::time_point end = chrono::steady_clock::now();
            std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
                    end - start); //time to execute algo + small if statement
            std::cout << time1.count() << std::endl;
        }
        insertionSortUtil(size, arr);
//        std::map<int, int> mp;
//        for (int i = 0; i < size; i++){
//            int pivot;
//            for (pivot = 0; pivot < size-1; pivot++){
//                if((toSearch[pivot]) < size || (toSearch[pivot]) == 0)
//                    break;
//            }
//            for(int y=size-2;y >= pivot;y--){
//                (toSearch[y+1]) = (toSearch[y]);
//            }
//            toSearch[pivot] = 1;
    }
    template <typename T, typename U>
    int linearSearch(T data, U searchNumber, int size, bool timed = 0){
        if (timed){
            chrono::steady_clock::time_point start = chrono::steady_clock::now();
            int result;
            for (int i = 0; i < size; i++) {
                if ((data[i]) == searchNumber) {
                    result = i;
                }
            }
            chrono::steady_clock::time_point end = chrono::steady_clock::now();
            std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
                    end - start); //time to execute algo + small if statement
            std::cout <<"linear search time: "<< time1.count() << std::endl;
        }
        for (int i = 0; i < size; i++) {
            if ((data[i]) == searchNumber) {
                return i;
            }
        }
        return -1;
    }
    template <typename T, typename U>
    int binarySearchRecX(T arr, int l, int r, U target){
        if (r >= l) {
            int mid=l+(r-l)/2;
            if (arr[mid] == target){
                return mid;
            }
            if (arr[mid] > target) {
                return binarySearchRecX(arr, l, mid - 1,target);
            }
            return binarySearchRecX(arr, mid + 1, r, target);
        }
        return -1;
    }
    template <typename T, typename U>
    int binarySearch(T arr,U target, int l, int r, bool timed = 0){
        if (timed==true){
            chrono::steady_clock::time_point start = chrono::steady_clock::now();
            int result = binarySearchRecX(arr, l, r, target);
            chrono::steady_clock::time_point end = chrono::steady_clock::now();
            std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
                    end - start); //time to execute algo + small if statement
            std::cout <<"binary search time: "<< time1.count() << std::endl;
        }
        return binarySearchRecX(arr, l, r, target);
    }
    template <typename T, typename U>
    int exponential(T arr, U x, int size){
        if (arr[0] == x) {
            return 0;
        }
        int i = 1;
        while (i < size && arr[i] <= x){
            i = i*2;
        }
        return binarySearchRecX(arr, i/2, min(i, size-1), x);
    }
    template <typename T, typename U>
    int exponentialSearch(T arr, U x, int size, bool timed = 0){
        if (timed==true){
            chrono::steady_clock::time_point start = chrono::steady_clock::now();
            int result = exponential(arr, x, size);
            chrono::steady_clock::time_point end = chrono::steady_clock::now();
            std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
                    end - start); //time to execute algo + small if statement
            std::cout <<"Exponential Search Time: "<< time1.count() << std::endl;
        }
        return exponential(arr, x, size);
    }
    void runTests(){
        for (int i = 0; i < 10; i++){
            int size = 200000 * i;
            int t[size];
            for (int i = 0; i < size; i++){
                t[i] = (size-1)-i;
            }
            quickSort1<int>(t, size, true); // works
            cout<<endl;
            for (int i = 0; i < size; i++){
                t[i] = size-i;
            }
            mergeSort<int>(t, size, true);
            int c = linearSearch<int*, int>(t, 130000, size, true);
            cout<<"index"<<c<<endl;
            int y = binarySearch<int*, int>(t, 130000, 0, size, true);
            cout<<"index"<<y<<endl;
            int k = exponentialSearch<int*, int>(t, 130000, size, true);
            cout<<"index"<<k<<endl;
            int *q = new int[size];
            for (int i = 0; i < size; i++){
                q[i] = i;
            }
            int c1 = linearSearch<int*, int>(q, 121, size, true);
            int y1 = binarySearch<int*, int>(q, 121, 0, size, true);
            int k1 = exponentialSearch<int*, int>(q, 121, size, true);
            int c2 = linearSearch<int*, int>(t, 199, size, true);
            int y2 = binarySearch<int*, int>(t, 199, 0, size, true);
            int k2 = exponentialSearch<int*, int>(t, 199, size, true);
            cout<<"N="<<size<<endl;
        }
    }
};

#endif //FURNERALGO_ALGOLIBRARY_H
