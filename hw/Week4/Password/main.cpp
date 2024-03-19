#include "Password.h"
#include <iostream>

using namespace std;

int main() {
    Password pass1,pass2;
    pass1.set("Th1s1sC0rr3ctP4ss");
    pass2.set("ThisIsIncorrectPass");
    pass1.validate();
    pass2.validate();
    return 0;
}