class Solution:
    def findGCD(self, nums: List[int]) -> int:
        num1=min(nums)
        num2=max(nums)
        print(num1,num2)
        gcd=1
        for i in range(1,min(num1,num2)+1):
            if num1%i==0 and num2%i==0:
                gcd=i
                print(gcd)
        return gcd