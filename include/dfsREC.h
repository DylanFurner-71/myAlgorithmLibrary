//
// Created by Dylan Furner on 9/17/21.
//

#ifndef FURNERALGO_algoLibrary<T>_DFSREC_H
#define FURNERALGO_algoLibrary<T>_DFSREC_H

#include "Algorithm.h"
#include <vector>
using namespace std;
template <typename T>
class dfsREC : public Algorithm<T>{
public:
    dfsREC(){};
    ~dfsREC(){};
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
#endif //FURNERALGO_ALGOLIBRARY_DFSREC_H
