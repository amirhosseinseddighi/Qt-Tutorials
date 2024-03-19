#include "Password.h"
#include <iostream>

using namespace std;

string Password::get() {
    return password;
}

int Password::set(string secret) {
    password = secret;
    return 1;
} 

int Password::validate() {
    int digits_only = 0;

    bool contains_non_alpha = password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos;
    bool contains_non_numeric = password.find_first_not_of("0123456789") != string::npos;
    if(contains_non_alpha == 0 || contains_non_numeric == 0) {
        cout << "This password is incorrect";
    }
    else {
        cout << "The password is correct";
    }
    return 1;
}