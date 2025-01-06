class Solution:
    def minOperations(self, b: str) -> List[int]:
        a=[]
        n=len(b)
        for i in range(n):
            s=0
            for j in range(n):
                if(i==j):
                    pass
                else:
                    if(b[j]=='1'):
                        s+=abs((j-i))
            a.append(s)
        return(a)
