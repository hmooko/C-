#include <iostream>
#include <string>
using namespace std;

// A를 제거한다, B를 제거한 후 문자열을 뒤집는다.

int main() {
    string S, T;

    cin >> S >> T;
    
    while (S.size() != T.size()) {
        if (T.back() == 'A') {
            T.pop_back();
        } else {
            T.pop_back();
            for (int i = 0; i < S.size(); i++) {
                if (T[i] == 'A') {
                    T[i] = 'B';
                } else {
                    T[i] = 'A';
                }
            }
        }
    }

    cout << S << endl << T;
}