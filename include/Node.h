#ifndef FURNERALGO_ALGOLIBRARY_NODE_H
#define FURNERALGO_ALGOLIBRARY_NODE_H
#include <list>
using namespace std;
template <typename T>
class Node {
private:
    T data;
    list<Node<T>*> children;
public:
    Node(){

    }
    Node(T* data){
            this->data = data;
            this->children;
    }
    Node(T data){
        this->data = data;
        this->children;
    }
    ~Node(){

    }
    void setLeft(Node* n){
        this->children.push_front(n);
    }
    void setRight(Node* n){
        this->children.push_back(n);
    }
};
#endif //FURNERALGO_ALGOLIBRARY_NODE_H

