#include <iostream>

#define FOR(x, n) for(int x = 0; x < n; ++ x)

using namespace std;

string str;
int cnt;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    FOR(i, 8) {
        cin >> str;
        
        FOR(j, 8) {
            if (str[j] == 'F' && !((i + j) % 2)) cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}