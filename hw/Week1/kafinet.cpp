#include <iostream>

using namespace std;

int main() {
    int n,m;
    // n -> count of computers
    // m -> count of groups
    cin >> n >> m;
    int row[n] = {0};
    for(int i=0;i<m;i++) {
        int s,l;
        cin >> s >> l;
        for(int j=(s-1);j<n;j++) {
            int need = l;
            int flag = 0;
            for(int z=j; z<need+j ;z++) {
                if(z>=n || row[z] == 1){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                for(int z=j; z<need+j ;z++) {
                    row[z] = 1;
                }
                continue;
            }
        }
        for(int k=0;k<n;k++) {
            cout << row[k];
        }
        cout << endl;
    }
    
    
}