#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans;

int main(void) {
    
    cin >> n;

    vector<int> person(n);
    
    for (int i = 0; i < n; i++) 
        cin >> person[i];
    
    sort(person.begin(), person.end());
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j <= i; j++) 
            ans += person[j];
    
    cout << ans << endl;
    
    return 0;
}