//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_PRIMS_H
#define FURNERALGO_ALGOLIBRARY_PRIMS_H

#include "Algorithm.h"
#include <vector>
using namespace std;
template <typename T>
class prims : public Algorithm<T>{
public:
    prims(){};
    ~prims(){};
    void performAlgo(){
        cout<<"Hello world"<<endl;
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
#endif //FURNERALGO_ALGOLIBRARY_PRIMS_H
