import itertools
class Solution:
    def subsetXORSum(self, a: List[int]) -> int:
        n=len(a)
        s=[]
        r=[]        
        print(s)
        for i in range(1,n+1):
            s.extend(itertools.combinations(a, i))
        for i in s:
            x=0
            for j in i:
                x^=j
            r.append(x)
        return sum(r)        