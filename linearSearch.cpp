//
// Created by Dylan Furner on 10/5/21.
#include "include/linearSearch.h"
template <typename T>
linearSearch<T>::linearSearch() {
    this->name = "Linear Search";
    this->searchNumber = 0;
    this->count = 0;
};
template <typename T>
linearSearch<T>::~linearSearch() {};
template <typename T>
void linearSearch<T>::performAlgo() {
    this->searchNumber = (rand() % this->size + 1);
    for (int i = 0; i < this->size; i++) {
        if (*(this->toSearch+i) == this->searchNumber) break;
        this->count++;
    }
};
template <typename T>
void linearSearch<T>::stats(){
}
template <typename T>
void linearSearch<T>::save() {

}
template <typename T>
void linearSearch<T>::configure() {

}
template <typename T>
void linearSearch<T>::select(int choice) {
}


