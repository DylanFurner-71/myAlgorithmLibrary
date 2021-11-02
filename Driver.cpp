//
// Created by Dylan Furner on 9/16/21.
//
#include "include/Driver.h"
Driver::Driver() {
}
Driver::~Driver(){
}
void Driver::Drive(bool verbose){
    for (int k = 0; k < 2; k++) {
        if (k == 0) {
            this->a1 = new searchInterface();
        } else if (k == 1) {
            this->a1 = new sortInterface();
        }
        if (a1 != NULL) {
            this->a1->load();
            this->a1->runTests();
            if (verbose) {
                    this->a1->printResults();
            }
        } else {
            cout<<"a1 is null"<<endl;
        }
    }
}