#include <iostream>

using namespace std;

char n, cur;
int a, b, gap;

void record() {
    if (cur == 'A') {
        a += (n - '0');
        // cout << "a: " << a << endl;
    } else {
        b += (n - '0');
        // cout << "b: " << b << endl;
    }
}

void deuce() {
    // cout << "deuce!\n";
    
    for (int i = 0; i < 200; i ++) {
        scanf("%1c", &n);
        
        gap = abs(a - b);
        // cout << "gap: " << gap << endl;

        if (gap >= 2) {
            char winner = (a > b) ? 'A' : 'B';
            cout << winner << "\n";
            
            return;
        }

        if (i % 2 == 0) {
            cur = n;
            continue;
        }

        record();
    }
}
 
int main(void) {
    ios::sync_with_stdio(false);
    
    for (int i = 0; i < 200; i ++) {
        scanf("%1c", &n);

        if (i % 2 == 0) {
            cur = n;
            continue;
        }
        
        record();

        if (a == 10 && b == 10) {
            deuce();
            break;
        }

        if (a >= 11 || b >= 11) {
            char winner = (a > b) ? 'A' : 'B';
            cout << winner << "\n";
            
            break;
        }
    }

    return 0;
}