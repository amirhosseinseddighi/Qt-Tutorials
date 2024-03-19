#include <iostream>
#include <string>
using namespace std;

int length(string str) {
    for(int i=0;;i++) {
        if(str[i] == '\0') return i;
    }
}

int main() {
    string winner = "";
    int winner_index = 0;
    int n =0;
    cin >> winner;
    cin >> n;
    for(int i=0;i<n;i++) {
        string name = "";
        cin >> name;
        if(length(name) == length(winner) && !winner_index) {
            for(int j=0;j<length(winner);j++) {
                if(name[j] == '?') {
                    name[j] = winner[j];
                }
            }
            if(winner == name) {
                winner_index = i+1;
            }
        }
    }
    if(winner_index) {
        cout << "The winner is the "<< winner_index<< "th player of the list";
    }else {
        cout << "The winner was not in the input list";
    }
}