#include <iostream>

using namespace std;
int main() {
    int count;
    cin >> count;
    int numbers[count];
    for(int i=0;i<count;i++) {
        cin >> numbers[i];
    }
    for(int i=0;i<count;i++) {
        for(int j=i+1;j<count;j++) {
            if(numbers[j] <= numbers[i]) {
                int tmp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = tmp;
            }
        }
    }
    for(int i=0;i<count;i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}