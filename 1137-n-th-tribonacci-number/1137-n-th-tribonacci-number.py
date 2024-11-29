class Solution:
    def tribonacci(self, n: int) -> int:
        s=[0,1,1]
        while(len(s)<=n):
            s.append(s[-1]+s[-2]+s[-3])
        return s[n]

        