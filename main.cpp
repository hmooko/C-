#include <iostream>
using namespace std;

int area[1024][1024];
long s[1024][1024];

int main() {
    int N, M;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> area[i][j];
        }
    }
    s[0][0] = area[0][0];
    for (int i = 0; i < 1024; i++) {
        for (int j = 0; j < 1024; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            if (i < 1) {
                s[i][j] = s[i][j - 1] + area[i][j];
            } else if (j < 1) {
                s[i][j] = s[i - 1][j] + area[i][j];
            } else {
                s[i][j] = s[i][j - 1] + s[i - 1][j] + s[i - 1][j - 1] + area[i][j];
            }
        }
    }
    cout << "\n" << s[0][0] << " " << s[1][0] << " " << s[0][1] << " " << s[1][1];
    /* for (int i = 0; i < M; i++) {
        cin >> 
    } */

    return 0;
}