class Solution {
public:
    int findMinimumTime(std::vector<int>& strength, int K) {
        int n = strength.size();
        int minTime = INT_MAX;
        std::sort(strength.begin(), strength.end());
        do {
            int time = 0;
            int factor = 1;

            for (int i = 0; i < n; ++i) {
                int requiredTime = (strength[i] + factor - 1) / factor;
                time += requiredTime; 
                factor += K;          
            }

            minTime = std::min(minTime, time);

        } while (std::next_permutation(strength.begin(), strength.end()));

        return minTime;
    }
};