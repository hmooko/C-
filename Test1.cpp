#include <iostream>
#include <queue>
using namespace std;

int area[300][300];

int main() {
    int N, M;
    int year = 0, cnt = 0;
    queue<pair<int, int>> q;

    cin >> N, M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> area[i][j];
            if (area[i][j] > 0)  q.push(make_pair(i, j));
        }
    }

    for (; !q.empty() || cnt < 2; year++, cnt = 0) {
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while ()
    }
    
}