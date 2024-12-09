#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>
#include "Squirrel.h"
using namespace std;

class Node {
public:

    Node(Squirrel* squirrel) {
        this->squirrel = squirrel;
        this->left = nullptr;
        this->right = nullptr;
    }


    void set_left(Node* left_node) {
        this->left = left_node;
    }


    void set_right(Node* right_node) {
        this->right = right_node;
    }


    Node* get_left() {
        return this->left;
    }


    Node* get_right() {
        return this->right;
    }


    string get_squirrel_name() {
        return squirrel->getName();
    }

private:
    Squirrel* squirrel;
    Node* left;
    Node* right;

};

#endif // NODE_H
