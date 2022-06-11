#include <iostream>

#define FOR(x, n) for (short x = 0; x < n; x ++)

using namespace std;

bool m[30];

int main() {
    
    short idx;
    
    FOR (i, 28) {
        cin >> idx;
        
        m[idx - 1] = true;
    }

    FOR (i, 30)
        if (!m[i]) cout << i + 1 << "\n";

    return 0;
}