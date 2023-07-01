class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0, ans =0;
        int j=0, sum = 0;
        int avg =0;
        
        while(j<arr.size()){
            sum += arr[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1 == k){
                avg = sum/k;
                if(avg >= threshold){
                    ans++;
                }
                sum -= arr[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};