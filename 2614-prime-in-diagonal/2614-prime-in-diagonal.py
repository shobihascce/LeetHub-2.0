class Solution:
    def is_prime(self,n:int)->bool:
        if n <= 1:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    def diagonalPrime(self, nums: List[List[int]]) -> int:
        n=len(nums)
        m=len(nums[0])
        s=[]
        for i in range(n):
            for j in range(m):
                if(i==j or j==(n-i-1)):
                    s.append(nums[i][j])
        s.sort()
        for i in s[::-1]:
            if(self.is_prime(i)):
                return i
        return 0
        

