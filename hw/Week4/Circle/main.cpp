#include "Circle.h"
#include <iostream>

using namespace std;

int main() {
    Circle cir1(6.1);
    Circle cir2(7.0);
    Circle cir3(3.8);

    if(cir1.S() > cir2.S()) cout << "Circle 1 > Circle 2!" << endl;
    if(cir1.S() > cir3.S()) cout << "Circle 1 > Circle 3!" << endl;
    if(cir2.S() > cir3.S()) cout << "Circle 2 > Circle 3!" << endl;

}