#include <iostream>
using namespace std;

int is_prime(int);
int reverse(int);

int main() {
    int number = 0;
    cin >> number;
    if(is_prime(number) && is_prime(reverse(number))) cout << 1;
    else cout << 0;
    return 0;
}

int is_prime(int x) {
    if(x < 2) return 0; 
    for(int i=2;i<=x/2;i++) {
        if(x%i == 0) {
            return 0;
        }
    }
    return 1;
}

int reverse(int num) {
    int r = 0,result = 0;
    while (num)
    {
        r = num % 10;
        result = (result * 10) + r;
        num = num / 10; 
    }
    return result;
}