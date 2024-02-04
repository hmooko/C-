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
                s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + area[i][j];
            }
        }
    }
    
    for (int i = 0; i < M; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 -= 1; y1 -= 1; x2 -= 1; y2 -= 1;
        cout << s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1];
    } 


    return 0;
}