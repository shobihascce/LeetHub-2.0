class Solution:
    def countAsterisks(self, s: str) -> int:
        r=s.split('|')
        n=len(r)
        print(r)
        c=0
        for i in range(0,n,2):
            c+=(r[i].count('*'))

        return c
        