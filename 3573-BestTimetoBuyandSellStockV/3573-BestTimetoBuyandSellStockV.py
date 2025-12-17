# Last updated: 17/12/2025, 23:29:06
1class Solution:
2    def maximumProfit(self, prices: List[int], k: int) -> int:
3        n=len(prices)
4        dp=[[[0 for _ in range(k+1)] for _ in range(3)] for _ in range(n+1)]
5        for i in range(3):
6            for j in range(k+1):
7                if i==1:
8                    dp[n][i][j]=-int(1e9)
9        for i in range(n+1):
10            for j in range(3):
11                dp[i][j][k]=0
12        for i in range(n-1,-1,-1):
13            for b in range(3):
14                for t in range(k):
15                    profit=dp[i+1][b][t]
16                    if b==0:
17                        profit=max(profit,-prices[i]+dp[i+1][2][t],prices[i]+dp[i+1][1][t])
18                    elif b==1:
19                        profit=max(profit,-prices[i]+dp[i+1][0][t+1])
20                    else:
21                        profit=max(profit,prices[i]+dp[i+1][0][t+1])
22                    dp[i][b][t]=profit
23        return dp[0][0][0]