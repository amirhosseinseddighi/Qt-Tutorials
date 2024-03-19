#include <iostream>

using namespace std;

int main() {
    int n,s,d;
    int kian_x,kian_y,candle_x,candle_y;
    cin >> n >> s >> d;
    int numbers[n][n] = {0};
    int tmp = n;
    int current_num = 0;
    int direction = 2; // 1 = right, 2 = up, 3 = left, 4 = down
    int current_y = n-1,current_x = n-1;
    // Creating last row
    for(int i=0;i<tmp;i++) {
        current_num++;
        numbers[current_y][i] = current_num;
        if(current_num == s) {
                kian_x = i;
                kian_y = current_y;
            }
        if(current_num == d) {
            candle_x = i;
            candle_y = current_y;
        }
    }  
    current_num++;
    tmp--;

    while(tmp > 0) {
        if(direction == 1) {
            current_num--;
            for(int i=0;i<=tmp;i++) {
                numbers[current_y][current_x+i] = current_num;
                if(current_num == s) {
                    kian_x = current_x+i;
                    kian_y = current_y;
                }
                if(current_num == d) {
                    candle_x = current_x+i;
                    candle_y = current_y;
                }
                current_num++;
            } 
            current_x += tmp; 
            direction = 2;
            tmp--;   
        }
        if(direction == 2) {
            current_num--;
            for(int i=0;i<=tmp;i++) {
                int changing_y = current_y - i;
                numbers[changing_y][current_x] = current_num;
                if(current_num == s) {
                    kian_x = current_x;
                    kian_y = changing_y;
                }
                if(current_num == d) {
                    candle_x = current_x;
                    candle_y = changing_y;
                }
                current_num++;
            }
            current_y -= tmp;
            direction = 3;
        }  
        if(direction == 3) {
            current_num--;
            for(int i=0;i<=tmp;i++) {
                int changing_x = current_x - i;
                numbers[current_y][changing_x] = current_num;
                if(current_num == s) {
                    kian_x = changing_x;
                    kian_y = current_y;
                }
                if(current_num == d) {
                    candle_x = changing_x;
                    candle_y = current_y;
                }
                current_num++;
            }
            current_x -= tmp;
            if(current_num -1== s) {
                kian_x = current_x;
                kian_y = current_y;
            }
            if(current_num-1 == d) {
                candle_x = current_x;
                candle_y = current_y;
            }
            direction = 4;
            tmp--;
        }
        if(direction == 4) {
            current_num--;
            for(int i=0;i<=tmp;i++) {
                int changing_y = current_y + i;
                numbers[changing_y][current_x] = current_num;
                if(current_num == s) {
                    kian_x = current_x;
                    kian_y = changing_y;
                }
                if(current_num == d) {
                    candle_x = current_x;
                    candle_y = changing_y;
                }
                current_num++;
            }
            current_y += tmp;
            if(current_num -1== s) {
                kian_x = current_x;
                kian_y = current_y;
            }
            if(current_num-1 == d) {
                candle_x = current_x;
                candle_y = current_y;
            }
            direction = 1;
        }
    }

    // Calculate the road
    int diff_x = kian_x - candle_x;
    int diff_y = kian_y - candle_y;
    if(diff_x > 0) {
        cout << diff_x << " L" << endl;
    } 
    else if(diff_x < 0) {
        cout << -1 * diff_x << " R" << endl;
    }
    if(diff_y > 0) {
        cout << diff_y << " U" << endl;
    } 
    else if(diff_y < 0) {
        cout << -1 * diff_y << " D" << endl;
    }
    return 0;
}