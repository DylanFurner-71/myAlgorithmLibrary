////
//// Created by Dylan Furner on 10/28/21.
////
//
//#include "include/algoLibrary.h"
//void algoLibrary::runAllTests(){
//    chrono::steady_clock::time_point start = chrono::steady_clock::now();
//    srand((unsigned) time(NULL));
//    Driver d1;
//    d1.Drive();
//    chrono::steady_clock::time_point end = chrono::steady_clock::now();
//    std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(
//            end - start); //time to execute algo + small if statement
//    std::cout << time1.count() << std::endl;
//}
//template <typename T>
//void merge(T array, int const left, int const mid, int const right)
//{
//    auto const subArrayOne = mid - left + 1;
//    auto const subArrayTwo = right - mid;
//    auto *leftArray = new int[subArrayOne],
//            *rightArray = new int[subArrayTwo];
//    for (auto i = 0; i < subArrayOne; i++)
//        leftArray[i] = *(array+left + i);
//    for (auto j = 0; j < subArrayTwo; j++)
//        rightArray[j] = *(array + mid + 1 + j);
//    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
//    indexOfSubArrayTwo = 0; // Initial index of second sub-array
//    int indexOfMergedArray = left; // Initial index of merged array
//    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
//        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
//            *(array+indexOfMergedArray) = leftArray[indexOfSubArrayOne];
//            indexOfSubArrayOne++;
//        }
//        else {
//            *(array+indexOfMergedArray) = rightArray[indexOfSubArrayTwo];
//            indexOfSubArrayTwo++;
//        }
//        indexOfMergedArray++;
//    }
//    // Copy the remaining elements of
//    // left[], if there are any
//    while (indexOfSubArrayOne < subArrayOne) {
//        *(array+ indexOfMergedArray)= leftArray[indexOfSubArrayOne];
//        indexOfSubArrayOne++;
//        indexOfMergedArray++;
//    }
//    // Copy the remaining elements of
//    // right[], if there are any
//    while (indexOfSubArrayTwo < subArrayTwo) {
//        *(array+indexOfMergedArray) = rightArray[indexOfSubArrayTwo];
//        indexOfSubArrayTwo++;
//        indexOfMergedArray++;
//    }
//}
//template <typename T>
//void runSort(T arr, int begin, int end)
//{
//    if (begin >= end) {
//        return; // Returns recursively
//    }
//    auto mid = begin + (end - begin) / 2;
//    runSort(arr, begin, mid);
//    runSort(arr, mid + 1, end);
//    merge(arr, begin, mid, end);
//}
//template <typename T>
//void algoLibrary::mergeSort(T toSearch, int size){
//    runSort(toSearch, 0, size - 1);
//}
//template <typename T>
//void swap(T* a, T* b)
//{
//    T t = *a;
//    *a = *b;
//    *b = t;
//}
//template <typename T>
//int partition (T arr, int low, int high)
//{
//    int pivot = *(arr + high); // pivot
//    int i = (low - 1); // Index of smaller element
//
//    for (int j = low; j <= high- 1; j++)
//    {
//
//        if (*(arr+j)<= pivot)
//        {
//            i++; // increment index of smaller element
//            swap((arr+i), (arr +j));
//        }
//    }
//    swap((arr + i + 1), arr+high);
//    return (i + 1);
//}
//template <typename T>
//void quickSortAlgo(T arr, int low, int high)
//{
//    if (low < high)
//    {
//        int pi = partition(arr, low, high);
//        quickSortAlgo(arr, low, pi - 1);
//        quickSortAlgo(arr, pi + 1, high);
//    }
//}
//template < typename T>
//void algoLibrary::quickSort1(T toSearch, int size){
//    quickSortAlgo(toSearch, 0, size-1);
//}
//template <typename T>
//void algoLibrary::insertionSort(int size, T* toSearch, T search){
//    std::map<int, int> mp;
//    for (int i = 0; i < size; i++){
//        int pivot;
//        for (pivot = 0; pivot < size-1; pivot++){
//            if(*(toSearch+pivot) > search || *(toSearch+pivot) == 0)
//                break;
//        }
//        for(int y=size-2;y>=pivot;y--){
//            *(toSearch[y+1])=*(toSearch[y]);
//        }
//        toSearch[pivot] = search;
//    }
//}
//template <typename T>
//int algoLibrary::linearSearch(T data, T searchNumber, int size){
//    for (int i = 0; i < size; i++) {
//        if (*(data+i) == searchNumber) break;
//    }
//}
//template<typename T>
//int binarySearchRecX(T* arr, int l, int r, T target){
//    if (r >= l) {
//        int mid=l+(r-l)/2;
//        if (arr[mid] == target){
//            return mid;
//        }
//        if (arr[mid] > target) {
//            return binarySearchRecX(arr, l, mid - 1,target);
//        }
//        return binarySearchRecX(arr, mid + 1, r, target);
//    }
//    return -1;
//}
//template <typename T>
//int algoLibrary::binarySearch(T arr, int l, int r, T target){
//    return binarySearchRecX(arr, l, r, target);
//}
//template <typename T>
//int exponential(T* arr, int n, int x, int size){
//    if (arr[0] == x) {
//        return 0;
//    }
//    int i = 1;
//    while (i < n && arr[i] <= x){
//        i = i*2;
//    }
//    return binarySearchRecX(arr, i/2, std::min(i, size-1), x);
//}
//template <typename T>
//int algoLibrary::exponentialSearch(T arr, int n, int x, int size){
//    return exponential(arr, n, x, size);
//}
//
