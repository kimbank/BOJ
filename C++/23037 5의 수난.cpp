#include <iostream>

#define pow(x) (x * x * x * x * x)
#define FOR(x, n) for (int x = 0; x < n; x ++)

using namespace std;

string num;
int sum;

int main() {
    cin >> num;

    FOR(i, 5) {
        sum += pow((num[i] - '0'));
    }

    cout << sum;

    return 0;
}