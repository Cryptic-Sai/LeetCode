class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int trk =0;
        for(int x : arr){
            trk = min(trk + 1, x);
        }
        return trk;
    }
};