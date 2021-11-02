//
// Created by Dylan Furner on 9/16/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_ALGORITHM_H
#define FURNERALGO_ALGOLIBRARY_ALGORITHM_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;
template <typename T>
class Algorithm {
public:
    string name ="";
    int size;
protected:
    int step = 0;
    const int numSteps = 10;
    int* toSearch;
    T original;
    vector<double> times; //check this
public:
    Algorithm() {};
    ~Algorithm() {};
    void load(T z, int size) {
        cout<<size<<endl;
        this->toSearch = new int[size];
        (this->toSearch) = z;
        for (int i = 0; i < size; i++){
            this->toSearch[i] = z[i];
        }
        this->size = size;
    };
    double execute(int i = 0) {
        chrono::steady_clock::time_point start = chrono::steady_clock::now();
        this->performAlgo();
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        std::chrono::duration<double> time1 = chrono::duration_cast<chrono::duration<double> >(end - start); //time to execute algo + small if statement
        this->times.push_back(time1.count());
        step++;
        return time1.count();
    };
    void stats() {
    };
    int sizes(){
        return this->size;
    }
    virtual void select(int choice) = 0;
    virtual void save () = 0;
    virtual void configure() = 0; //future expandability
    virtual void performAlgo() = 0;
};

#endif //FURNERALGO_ALGOLIBRARY_ALGORITHM_H
