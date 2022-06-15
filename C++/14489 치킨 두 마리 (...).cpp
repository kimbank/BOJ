#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    if (2 * C > A + B) {
        cout << A + B << "\n";
    } else {
        cout << A + B - (2 * C) << "\n";
    }

    return 0;
}