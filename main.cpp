#include <iostream>
using namespace std;

int main() {
    int N, M;
    int area[1024][1024];
    long s[1024][1024];

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> area[i][j];
        }
    }
    s[0][0] = area[0][0];
    for (int i = 0; i < 1024; i++) {
        for (int j = 0; j < 1024; j++) {
            if (i < 1) {
                s[i][j] = s[i][j - 1] + area[i][j];
            } else if (j < 1) {
                s[i][j] = s[i - 1][j] + area[i][j];
            } else {
                s[i][j] = s[i][j - 1] + s[i - 1][j] + s[i - 1][j - 1] + area[i][j];
            }
        }
    }

    /* for (int i = 0; i < M; i++) {
        cin >> 
    } */

    return 0;
}