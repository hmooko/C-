#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str("abc");

    reverse(str.begin(), str.end());
    cout << str;
}