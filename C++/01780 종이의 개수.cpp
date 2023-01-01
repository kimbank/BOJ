#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> V;
int Negative = 0, Zero = 0, Positive = 0;

void Solution(int n, int yPad, int xPad) {

    for (int i = yPad; i < yPad + n; i++) {
        for (int j = xPad; j < xPad + n; j++) {
            
            if (V[yPad][xPad] != V[i][j]) {
                Solution(n/3, yPad, xPad);
                Solution(n/3, yPad + n/3, xPad);
                Solution(n/3, yPad, xPad + n/3);
                Solution(n/3, yPad + n/3, xPad + n/3);
                Solution(n/3, yPad + n/3*2, xPad);
                Solution(n/3, yPad, xPad + n/3*2);
                Solution(n/3, yPad + n/3*2, xPad + n/3*2);
                Solution(n/3, yPad + n/3*2, xPad + n/3);
                Solution(n/3, yPad + n/3, xPad + n/3*2);
                
                return;
            }
        }
    }

    if (V[yPad][xPad] == 1) {
        Positive++;
    } else if (V[yPad][xPad] == -1) {
        Negative++;
    } else {
        Zero++;
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

    Solution(N, 0, 0);

    cout << Negative << "\n" << Zero << "\n" << Positive << "\n";

    return 0;
}
