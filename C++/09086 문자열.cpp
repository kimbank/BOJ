#include <iostream>
#include <string>

#define FOR(x, n) for(int x = 0; x < n; ++ x)

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    FOR(i, n) {
        string str;
        cin >> str;

        cout << str[0] << str[str.size() - 1] << "\n";
    }

    return 0;
}