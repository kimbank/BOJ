#include <stdio.h>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    int n, x;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &x);
        
        if (!x) {
            if (pq.empty()) {
                printf("0\n");
                continue;
            }
                
            printf("%d\n", pq.top());
            pq.pop();
        } else pq.push(x);
    }
    
    return 0;
}