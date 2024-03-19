#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *scores;
    scores = new int[n];
    for(int i=0;i<n;i++) {
        cin >> *(scores + i);
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(*(scores + j) < *(scores + i)) {
                int tmp = *(scores + j);
                *(scores + j) = *(scores + i);
                *(scores + i) = tmp;
            }
        }
    }
    for(int i=0;i < n;i++) {
        if(i == (n/2)) {
            cout << endl;
        }
        cout << *(scores + i) << " ";
    }
    delete[] scores;
    return 0;

}