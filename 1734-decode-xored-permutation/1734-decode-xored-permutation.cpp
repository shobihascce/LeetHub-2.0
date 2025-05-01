class Solution {
public:
    vector<int> decode(vector<int>&e) {
        int n=e.size()+1;
        vector<int>perm(n);
        int x=0;
        for(int i=1;i<=n;++i){
            x^=i;
        }
        int odd=0;
        for(int i=1;i<n-1;i+=2){
            odd^=e[i];
        }
        perm[0]=x^odd;
        for(int i=0;i<n-1;++i){
            perm[i+1]=perm[i]^e[i];
        }
        return perm;
    }
};
