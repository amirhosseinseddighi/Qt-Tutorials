#include <iostream>
#include <string>

using namespace std;

void clearBut(string str);
int length(string str);
int attack_index = 0; // set to 1 if Attack exist before but

int indexBut(string str) {
    int len = length(str);
    for(int i=0;i<len-1;i++) {
        if(i < len -5 ) {
            if(str[i] == 'A' && str[i+1] == 't' && str[i+2] == 't' && str[i+3] == 'a' && str[i+4] == 'c' && str[i+5] == 'k') {
                attack_index = 1;
            }
        }
        if(str[i] == 'B' && str[i+1] == 'u' && str[i+2] == 't') {
            return i;
        }
    }
    return 0;

}

int is_int(char chr) {
    if(chr == '0' || chr == '1'|| chr == '2'|| chr == '3'|| chr == '4'|| chr == '5'|| chr == '6'|| chr == '7'|| chr == '8'|| chr == '9') {
        return 1;
    }
    return 0;
}

int findDateIndex(string str,int indexBut) {
    int index_start = indexBut + 3;
    int len = length(str);
    int date_index = -1;
    for(int i=index_start;i<(len-5);i++) {
        if(str[i] == 'A' && str[i+1] == 't' && str[i+2] == 't' && str[i+3] == 'a' && str[i+4] == 'c' && str[i+5] == 'k') {
            if(attack_index == 1) return i+6;
            else {
                if(date_index != -1) {
                    return i+6;
                }
                date_index = i+6;
            }
        }
    }
    return date_index;

}


void printDate(string str,int len,int date_index) {
    for(int j=date_index;j<len ;j++) {
        if(is_int(str[j])) {
            cout << str[j];
        }
        else {
            break;
        }
    }
}

int length(string str) {
    for(int i=0;;i++) {
        if(str[i] == '\0') return i;
    }
}


int main() {
    string secret;
    cin >> secret;
    int index_date = findDateIndex(secret,indexBut(secret)); 
    printDate(secret,length(secret),index_date);
    return 0;
}