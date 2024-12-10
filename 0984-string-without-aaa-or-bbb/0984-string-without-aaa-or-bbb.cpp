class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string result = "";
        while (a > 0 || b > 0) {
            if (a > b) {
                if (a > 0) {
                    result += 'a';
                    a--;
                }
                if (a > b) {
                    result += 'a';
                    a--;
                }
                if (b > 0) {
                    result += 'b';
                    b--;
                }
            } else {
                if (b > 0) {
                    result += 'b';
                    b--;
                }
                if (b > a) {
                    result += 'b';
                    b--;
                }
                if (a > 0) {
                    result += 'a';
                    a--;
                }
            }
        }
        return result;
    }
};
