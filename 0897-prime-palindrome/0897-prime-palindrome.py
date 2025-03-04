import math
class Solution:
    def is_prime(self,n:int)->bool:
        if n <= 1:
            return False
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
        return True
    def is_pall(self,n:int)->bool:
        n=str(n)
        return n==n[::-1]
    def primePalindrome(self, n: int) -> int:
        while(True):
            if(self.is_prime(n) and self.is_pall(n)):
                return n
            n+=1        



        