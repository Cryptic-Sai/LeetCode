class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int s =0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(auto i:salary){
            mini = min(mini,i);
            maxi = max(maxi,i);
            s+=i;
        }
        return (s-maxi-mini)*1.0/(salary.size()-2);
    }
//     int mi=INT_MAX,ma=INT_MIN,s=0;
//         for(auto i:salary)mi=min(mi,i),ma=max(ma,i),s+=i;
//         return (s-ma-mi)*1.0/(salary.size()-2);
//     }
};