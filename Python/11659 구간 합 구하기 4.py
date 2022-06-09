import sys
input = sys.stdin.readline

N, M = map(int, input().split())
nums = list(map(int, input().split()))

dp = [0] * (N + 1)
for _ in range(N):
    dp[_ + 1] = dp[_] + nums[_]

for _ in range(M):
    i, j = map(int, input().split())
    print(dp[j] - dp[i - 1])