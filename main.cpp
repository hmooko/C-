#include <iostream>
using namespace std;

int A[1000000];
int S[1000000];

int main() {

    int N, M, count = 0;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && (S[j] - S[i]) % M == 0) {
                count += 1;
            }
        }
    }

    cout << count;
    return 0;
}