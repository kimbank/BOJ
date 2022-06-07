#include <iostream>
#include <string>

#define FOR(x, n) for(int x = 0; x < n; ++ x)

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str;
    cin >> str;

    FOR(i, str.size()) {
        char out;
        
        out = (str[i] >= 97) ? str[i] - 32 : str[i] + 32;
        cout << out;
    }
    
    return 0;
}