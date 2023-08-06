#include <iostream>
using namespace std;

int main() {
    int N;
    int table[2][7];
    
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> table[0][i] >> table[1][i];
    }
}