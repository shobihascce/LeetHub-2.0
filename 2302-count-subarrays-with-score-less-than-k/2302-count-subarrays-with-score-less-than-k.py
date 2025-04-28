class Solution:
    def countSubarrays(self, arr: List[int], k: int) -> int:
        n = len(arr)
        j = 0
        total = 0
        ans = 0
        for i in range(n):
            total+=arr[i]
            while j<=i and total*(i-j+1)>=k:
                total-=arr[j]
                j+=1
            ans+=(i-j+1)
        return ans
