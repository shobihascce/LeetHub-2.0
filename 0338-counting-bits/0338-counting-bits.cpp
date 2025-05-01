class Solution {
public:
    int count1Bits(int n) {
    int count = 0;
    while (n) {
        if (n & 1) count++;
        n >>= 1;
    }
    return count;
}
    vector<int> countBits(int n) {
        vector<int> num;
        for(int i=0;i<=n;i++){
            num.push_back(count1Bits(i));
        }
        return num;
    }
};