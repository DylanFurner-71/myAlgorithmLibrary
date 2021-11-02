//
// Created by Dylan Furner on 9/16/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_INSERTIONSORT_H
#define FURNERALGO_ALGOLIBRARY_INSERTIONSORT_H

#include "Algorithm.h"
#include <vector>
#include <map>
using namespace std;
template <typename T>
class insertionSort : public Algorithm<T>{
public:
    insertionSort(){
        this->name = "Insertion Sort";
    };
    ~insertionSort(){};
    void performAlgo(){
        int randomNumber;
        map<int, int> mp;
        for (int i = 0; i < this->size; i++){
            randomNumber = *(this->toSearch +(rand() % this->size + 1));
            int pivot;
            for (pivot = 0; pivot < this->size-1; pivot++){
                if(*(this->toSearch+pivot) > randomNumber || *(this->toSearch+pivot) == 0)
                    break;
            }
            for(int y=this->size-2;y>=pivot;y--){
                *(this->toSearch + y+1)=*(this->toSearch+y);
            }
            this->toSearch[pivot] = randomNumber;
        }
//        int arr[(this->size)];
//        for (int i = 0; i < this->size; i++){
//            arr[i] = *(this->toSearch+i);
//            mp[arr[i]]++;
//             for (auto i : mp) { // can be represented iwth integer from 0 to 2 in for loop , linear
// cout << i.first << " : " << i.second << "\n"; // Accessing map elements
// }
    };
    void save(){

    }
    void configure(){

    }
    void select(int choice){
        cout<<"Your choice is: "<<choice<<endl;
    }
protected:

};


#endif //FURNERALGO_ALGOLIBRARY_INSERTIONSORT_H
