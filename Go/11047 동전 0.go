package main

import "fmt"

func main() {
    var n, k, cnt, sum int

    fmt.Scan(&n, &k)

    var arr = make([]int, n)

    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }

    for ; sum != k; {
        for i := n - 1; i >= 0; i-- {
            if sum + arr[i] <= k {
                sum += arr[i];
                cnt++;

                break;
            }
        }
    }

    fmt.Println(cnt)
}