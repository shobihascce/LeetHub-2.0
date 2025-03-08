class Solution {
public:
    int minimumRecolors(string b, int k) {
        int n=b.length();
        int max_count=0;
        for(int i=0;i<=n-k;i++){
            int count=0;
            for(int j=0;j<k;j++){
                if(b[i+j]=='B')
                    count++;
            }
            max_count=max(count,max_count);
        }
        return (k-max_count);
        
    }
};