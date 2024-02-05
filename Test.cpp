#include <iostream>
using namespace std;

int A[1000000000];
long S[1000000000];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, count = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((S[j] - S[i]) % M == 0) {
                count += 1;
            }
        }
    }

    cout << count;
    return 0;
}