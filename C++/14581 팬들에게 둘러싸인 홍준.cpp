#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    
    for (int i = 1; i <= 9; i ++) {
        if (i == 5)
            cout << ":" << str << ":";
        else
            cout << ":fan:";
        
        if (!(i % 3)) cout << "\n";
    }
    
    return 0;
}