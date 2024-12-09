//
// Created by nickh on 12/8/2024.
//

#ifndef SQUIRREL_H
#define SQUIRREL_H

#include <string>
using namespace std;

class Squirrel {
public:
    Squirrel(string name) {
        this-> name = name;
    }

    string getName() {
        return this-> name;
    }
private:
    string name;


};



#endif //SQUIRREL_H
