class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum =0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        
        if(sum % 3 !=0 ){
            return false;
        }
        
        cout<<sum<<" ";
        
        bool chk = true;
        for(auto i:arr){
            if(i!=0){
                chk = false;
            }
        }
        if(chk){
            return true;
        }
        
        int x= sum/3;
        int count =0;
        int cur1 =0, cur2 = 0;        
        int i=0, j=arr.size()-1;
        while(i < j){
            if(i==0 || cur1 != x){
                cur1 += arr[i];
                i++;
            }
            if(j==arr.size()-1 || cur2 != x){
                cur2 += arr[j];
                j--;
            }
            if(cur1==x && cur2==x && sum-cur1-cur2 == x && i<=j){
                cout<<j<<" "<<i<<endl;
                return true;
            }
        }
        
        return false;
    }
};