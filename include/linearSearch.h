//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_LINEARSEARCH_H
#define FURNERALGO_ALGOLIBRARY_LINEARSEARCH_H
#include "Algorithm.h"
template <typename T>
class linearSearch : public Algorithm<T> {
public:
    int searchNumber;
    int count;

    linearSearch() {
        this->name = "Linear Search";
        this->searchNumber = 0;
        this->count = 0;
    };
    ~linearSearch() {};

    void performAlgo() {
        this->searchNumber = (rand() % this->size + 1);
        for (int i = 0; i < this->size; i++) {
            if (*(this->toSearch+i) == this->searchNumber) break;
            this->count++;
        }
    };
    void stats(){
    }
    void save() {

    }
    void configure() {

    }
    void select(int choice) {
    }
};




#endif //FURNERALGO_ALGOLIBRARY_LINEARSEARCH_H
