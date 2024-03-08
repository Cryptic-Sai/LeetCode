class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFreq = 0;
        int sum = 0;
        map<int, int> mp;

        for (int num : nums) {
            maxFreq = max(maxFreq, ++mp[num]);
        }
        for (auto& pair : mp) {
            if (pair.second == maxFreq) {
                sum += pair.second;
            }
        }

        return sum;
    }
};