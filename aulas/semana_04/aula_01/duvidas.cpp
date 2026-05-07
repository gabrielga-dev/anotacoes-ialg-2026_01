#include <iostream>

using namespace std;

int main() {
    int m[5][5] = {
        {1, 16, 15, 14, 13},
        {2, 17, 24, 23, 12},
        {3, 18, 25, 22, 11},
        {4, 19, 20, 21, 10},
        {5, 6, 7, 8, 9}
    };

    int count = 0;
    int h = 0, hMin = 0, hMax = 4;
    int v = 0, vMin = 0, vMax = 4;
    int direction = 0;
    //0: left-right
    //1:top-bottom
    //2:right-left
    //3:bottom-top

    while (count < 25) {
        // cout << h << "x" << v << ": " << m[h][v]<< endl;
        cout << m[h][v] << " ";
        count++;
        if (direction == 0) {
            if (h == hMax) {
                vMin++;
                direction = 1;
            } else {
                h++;
            }
        }
        if (direction == 1) {
            if (v == vMax) {
                hMax--;
                direction = 2;
            } else {
                v++;
            }
        }
        if (direction == 2) {
            if (h == hMin) {
                vMax--;
                direction = 3;
            } else {
                h--;
            }
        }
        if (direction == 3) {
            if (v == vMin) {
                hMin++;
                direction = 0;
            } else {
                v--;
            }
        }
    }

    return 0;
}
