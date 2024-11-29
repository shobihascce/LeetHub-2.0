class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        dp = [0] * (n + 1)
        j=n-1
        while(True):
            if(j<0):
                break
            dp[j]=cost[j]+min(dp[j+1],dp[j+2]if j+2<n+1 else 0 )
            j-=1
        return min(dp[0],dp[1])
            
