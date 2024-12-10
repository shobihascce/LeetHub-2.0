class Solution {
public:
    string reorganizeString(string s) {
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; ++i) {
            if (count[i] > 0) {
                pq.push({count[i], 'a' + i});
            }
        }
        string result = "";
        while (pq.size() > 1) {
            auto [freq1, ch1] = pq.top(); pq.pop();
            auto [freq2, ch2] = pq.top(); pq.pop();
            result += ch1;
            result += ch2;
            if (--freq1 > 0) pq.push({freq1, ch1});
            if (--freq2 > 0) pq.push({freq2, ch2});
        }
        if (!pq.empty()) {
            auto [freq, ch] = pq.top();
            if (freq > 1) return "";
            result += ch;
        }
        return result;
    }
};
