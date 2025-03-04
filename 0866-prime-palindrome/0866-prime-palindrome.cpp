class Solution {
public:
    bool isPrime(int num) {
        if(num<2) 
            return false;
        if(num==2)
            return true;
        if(num%2==0)
            return false; 
        for(int i=3;i<=sqrt(num);i+=2){
            if(num%i==0)
                return false;
        }
        return true;
    }
    bool isPalindrome(int num) {
        string s =to_string(num);
        int left=0,right=s.size()-1;
        while(left<right){
            if(s[left++]!=s[right--])
                return false;
        }
        return true;
    }
    int primePalindrome(int n) {
        if(n>=8&&n<=11) 
            return 11;
        for(int num= n;;num++){
            if(isPalindrome(num)&&isPrime(num)) {
                return num;
            }
        }
    }
};


