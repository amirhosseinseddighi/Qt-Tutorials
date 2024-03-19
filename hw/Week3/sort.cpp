#include <iostream>

using namespace std;

int main() {
    int *numbers;
    int n = 5;
    cin >> n;
    numbers = new int[n];
    //numbers = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++) {
        cin >> *(numbers+i);
    }


    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(*(numbers + j) < *(numbers + i)) {
                int tmp = *(numbers + j);
                *(numbers + j) = *(numbers + i);
                *(numbers + i) = tmp;
            }
        }
    }

    for(int i=0;i<n;i++) {
        cout << *(numbers+i) << " ";
    }
    cout << endl;

    int tmp_num;
    for(int i=0;i<n;i++) {
        if (!(tmp_num == *(numbers+i))) {
            cout << *(numbers+i) << " ";
            tmp_num = *(numbers+i);
        }
    }
    delete[] numbers;
    return 0;
}