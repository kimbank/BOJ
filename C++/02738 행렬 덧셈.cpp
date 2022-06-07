#include <iostream>
#include <vector>

#define FOR(x, n) for (int x = 0; x < n; ++ x)

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M, d;
    cin >> N >> M;
    vector<vector<int>> v(N);
    
    FOR(i, N) {
        FOR(j, M) {
            cin >> d;

            v[i].push_back(d);
        }
    }

    FOR(i, N) {
        FOR(j, M) {
            cin >> d;
            cout << v[i][j] + d << " ";
        }
        cout << "\n";
    }
    
    return 0; 
}