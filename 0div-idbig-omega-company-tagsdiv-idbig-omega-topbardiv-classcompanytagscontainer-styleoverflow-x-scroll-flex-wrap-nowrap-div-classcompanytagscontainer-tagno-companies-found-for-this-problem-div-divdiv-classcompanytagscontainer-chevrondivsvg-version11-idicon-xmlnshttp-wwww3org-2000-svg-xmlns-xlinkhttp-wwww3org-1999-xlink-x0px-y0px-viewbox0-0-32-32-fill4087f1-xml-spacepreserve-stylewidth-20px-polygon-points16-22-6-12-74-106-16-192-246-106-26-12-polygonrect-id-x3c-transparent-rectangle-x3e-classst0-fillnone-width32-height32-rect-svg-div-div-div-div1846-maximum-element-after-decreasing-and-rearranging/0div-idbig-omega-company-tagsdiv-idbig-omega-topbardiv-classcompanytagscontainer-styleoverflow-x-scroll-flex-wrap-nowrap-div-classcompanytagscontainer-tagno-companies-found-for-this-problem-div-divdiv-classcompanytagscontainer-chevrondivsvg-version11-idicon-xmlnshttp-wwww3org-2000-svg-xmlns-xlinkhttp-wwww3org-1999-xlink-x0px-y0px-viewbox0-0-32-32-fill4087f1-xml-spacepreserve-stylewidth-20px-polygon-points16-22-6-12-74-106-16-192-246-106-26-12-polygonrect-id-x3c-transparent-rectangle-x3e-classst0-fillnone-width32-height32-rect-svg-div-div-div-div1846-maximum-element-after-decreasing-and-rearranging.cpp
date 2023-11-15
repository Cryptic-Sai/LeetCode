class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        // int trk =0;
        // for(int x : arr){
        //     trk = min(trk + 1, x);
        // }
        // return trk;
        arr[0] =1;
        for(int i=1; i<arr.size(); i++){
            if(abs(arr[i] - arr[i-1]) <=1) continue;
            else arr[i] = arr[i-1] +1;
        }
        return arr.back();
    }
};