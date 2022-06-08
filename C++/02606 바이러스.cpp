#include <iostream>
#include <vector>

using namespace std;

vector<vector<short>> com(101);
bool visited[101];
short cnt;

void dfs(short i) {
    if (visited[i]) return;

    visited[i] = true;
    cnt++;

    for (auto t : com[i]) {
        dfs(t);
    }
}

int main() {
    short v, e, s, d;
    cin >> v >> e;

    for (int i = 0; i < e; i++) {
        cin >> s >> d;
        
        com[s].push_back(d);
        com[d].push_back(s);
    }

    dfs(1);

    cout << cnt - 1 << "\n";
    
    return 0;
}