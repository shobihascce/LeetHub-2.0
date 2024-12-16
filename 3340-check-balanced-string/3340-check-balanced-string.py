class Solution:
    def isBalanced(self, num: str) -> bool:
        l=[]
        for i in num:
            l.append(int(i))  
        a,b=0,0
        for i in range(len(l)):
            if(i%2==0):
                a+=l[i]
            else:
                b+=l[i]
        return(a==b)
        