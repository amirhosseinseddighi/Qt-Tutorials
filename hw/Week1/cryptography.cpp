#include <iostream>
#include <string>
using namespace std;

int main() {
    // Replace algorithm --> 2n'th char <=> (2n+1)'th - n start from 0
    string plaintext = "";
    char tmp_char = NULL;
    getline(cin,plaintext);
    for(int index=0;index+1 < plaintext.size();index+=2) {
        tmp_char = plaintext[index];
        plaintext[index] = plaintext[index + 1];
        plaintext[index + 1] = tmp_char;
    }

    // Translate Algorithm
    // n start from 1 --> n replace with 26 -n
    for(int index = 0; index < plaintext.length(); index++) {
        int current_char_index = int(plaintext[index]);
        int replacing_char_index = 122 - (current_char_index - 97);
        char replacing_char = char(replacing_char_index);
        cout << replacing_char;
    }
    return 0;
}