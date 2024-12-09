#include <iostream>
#include <string>
#include "Node.h"
#include "Squirrel.h"

using namespace std;

int main() {

    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffybutt("Mr. Fluffy Butt");


    Node nodeOne(&cheeks);
    Node nodeTwo(&squeaks);
    Node nodeThree(&fluffybutt);


    nodeOne.set_left(&nodeTwo);
    nodeOne.set_right(&nodeThree);

    cout << "Root node (node one) contains: " << nodeOne.get_squirrel_name() << endl;
    cout << "Left child of node one contains: " << nodeOne.get_left()->get_squirrel_name() << endl;
    cout << "Right child of node one contains: " << nodeOne.get_right()->get_squirrel_name() << endl;

    return 0;
}
