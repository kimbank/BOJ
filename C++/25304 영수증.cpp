#include <iostream>

using namespace std;

int tot, n, tmp, ttmp, sum;

int main() {
    cin >> tot >> n;

    while(n--) {
        cin >> tmp >> ttmp;
        sum += tmp * ttmp;
    }

    string out = (tot == sum) ? "Yes" : "No";

    cout << out << "\n";

    return 0;
}