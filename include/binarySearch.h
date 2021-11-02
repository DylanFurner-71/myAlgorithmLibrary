//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_BINARYSEARCH_H
#define FURNERALGO_ALGOLIBRARY_BINARYSEARCH_H
template <typename T>
class binarySearch : public Algorithm<T> {
public:
    binarySearch() {
        this->name = "Binary Search";
    };
    ~binarySearch() {};
    int binarySearchRecX(int* arr, int l, int r, int target){
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
    void performAlgo() {
        int searchNumber = (rand() % this->size);
        int result = binarySearchRecX(this->toSearch, 0, this->size-1, searchNumber);
//        if (result == -1) {
//            {
//                cout << "The number " << searchNumber << " was not found in the array." << endl;
//            }
//        } else {
//                cout << "The number" << searchNumber << "was found in the array."<<endl;
//        }
    };
    void stats(){
//        cout<<"The search number was "<<this->searchNumber<<endl;
//        cout<<"The operation was completed in "<<this->count<<" operations"<<endl;
    }
    void save() {
    }
    void configure() {
    }
    void select(int choice) {
        std::cout << "Your choice is: " << choice << endl;
    }
protected:
};
#endif //FURNERALGO_ALGOLIBRARY_BINARYSEARCH_H
