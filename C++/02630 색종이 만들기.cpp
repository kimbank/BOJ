#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> V;
int White = 0, Blue = 0;

void Solution(int n, int yPad, int xPad, int nest) {

    for (int i = yPad; i < yPad + n; i++) {
        for (int j = xPad; j < xPad + n; j++) {
            
            if (V[yPad][xPad] != V[i][j] && n >= 2) {
                Solution(n/2, yPad, xPad, nest);
                Solution(n/2, yPad + n/2, xPad, nest);
                Solution(n/2, yPad, xPad + n/2, nest);
                Solution(n/2, yPad + n/2, xPad + n/2, nest);
                
                return;
            }
        }
    }

    if (V[yPad][xPad] == 1) {
        Blue++;
    } else {
        White++;
    }
}

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) {
        vector<int> v;
        
        for (int j = 0; j < N; j++) {
            int k;
            cin >> k;
            
            v.push_back(k);
        }

        V.push_back(v);
    }

    Solution(N, 0, 0, 0);

    cout << White << "\n" << Blue << "\n";

    return 0;
}
