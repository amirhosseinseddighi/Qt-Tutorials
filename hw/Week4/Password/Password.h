#pragma once
#include <string>
using namespace std; 

class Password {
    public:
        // Functions
        int set(string password);
        string get();
        int validate();
    private:
        string password = "";
};