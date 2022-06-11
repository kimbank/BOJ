#include <iostream>

#define FOR(tmp, n) for (short tmp = 0; tmp < n; tmp ++)
#define FORR(tmp, n) for (short tmp = n; tmp >= 0; tmp --)

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    short N, M;
    cin >> N >> M;

    FOR (i, N) {
        bool ttmp[10];
        string tttmp; cin >> tttmp;
        
        FOR (j, M) {
            ttmp[j] = tttmp[j] -'0';
        }

        FORR (j, M - 1) {
            cout << ttmp[j];
        }
        cout << "\n";
    }

    return 0;
}