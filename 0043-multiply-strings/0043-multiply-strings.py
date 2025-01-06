class Solution:
    def num(self,n:str)->int:
        r=0
        for i in n:
            i=int(i)
            r=r*10+i
        return r
    def multiply(self, num1: str, num2: str) -> str:
        num1=self.num(num1)
        num2=self.num(num2)
        return str(num1*num2)
        
        