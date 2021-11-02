//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_ALGOLIBRARY_DFSIT_H
#define FURNERALGO_ALGOLIBRARY_DFSIT_H

#include "Algorithm.h"
#include <vector>
using namespace std;
template <typename T>
class dfsIT : public Algorithm<T>{
public:
    dfsIT(){};
    ~dfsIT(){};
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
#endif //FURNERALGO_ALGOLIBRARY_DFSIT_H
