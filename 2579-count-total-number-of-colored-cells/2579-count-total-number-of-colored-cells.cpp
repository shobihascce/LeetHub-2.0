class Solution {
public:
    long long coloredCells(int n){
        long long f=2*pow(n,2)-2*n+1;
        return f;
    }
};
