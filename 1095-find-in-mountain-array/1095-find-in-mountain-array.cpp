class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        
        int s = 0;
        int e = n - 2;
        
        while(s != e){
           int mid = (s+e)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                s = mid + 1;
            }else{
                e = mid;
            }
        }
        
        int p = s;
        s = 0;
        e = p;
        
        while(s != e){
            int mid = (e+s)/2;
            if(mountainArr.get(mid) < target){
                s = mid +1;
            }
            else{
                e = mid;
            }
        }
        
        if(mountainArr.get(s) == target){
                return s;
        }
        
        s = p + 1;
        e = n - 1;
        while(s != e){
            int mid = (e+s)/2;
            
             if(mountainArr.get(mid) > target){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        
        if(mountainArr.get(s) == target){
                return s;
        }
        return -1;
    }
};