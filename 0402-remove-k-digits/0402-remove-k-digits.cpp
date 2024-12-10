class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        int n = num.length();
        
       
        if (k == n) return "0";
        
       
        std::vector<char> result;
        
        for (int i = 0; i < n; i++) {

            while (k > 0 && !result.empty() && result.back() > num[i]) {
                result.pop_back();
                k--;
            }
            result.push_back(num[i]);
        }
        
        // If there are still digits left to remove, pop from the end
        while (k > 0) {
            result.pop_back();
            k--;
        }
        
        // Remove leading zeros
        int start = 0;
        while (start < result.size() && result[start] == '0') {
            start++;
        }
        
        // If the string is empty after removing zeros, return "0"
        if (start == result.size()) {
            return "0";
        }
        
        // Convert the result back to a string
        std::string res = "";
        for (int i = start; i < result.size(); i++) {
            res += result[i];
        }
        
        return res;
    }
};