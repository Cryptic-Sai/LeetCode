class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

    //     int l = 0, r = A.size() - 1, mid;
    //     while (l < r) {
    //         mid = (l + r) / 2;
    //         if (A[mid] < A[mid + 1])
    //             l = mid + 1;
    //         else
    //             r = mid;
    //     }
    //     return l;
    // }
        int s =0;
        int e = arr.size() -1 , mid;
        // int mid =0;
        while(s<e){
            mid = (e+s)/2;
            if( arr[mid] < arr[ mid+1]){
                s = mid +1;
            }else
                e = mid;
        }
            return s;
    }
};