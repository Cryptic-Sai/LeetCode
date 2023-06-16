// class Solution {
// public:
//     vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        
//         vector<vector<int>> result;        
//          map<pair<int, int>, bool>m;
        
//         for(auto q:queens)
//             m[{q[0], q[1]}] = true; 
        
//         int kr = king[0];
//         int kc = king[1];
        
//         //Upar
//         for(int r =kr ; r>=0; r--){
//             if(m.find({r , kc}) != m.end()){
//                 result.push_back({r, kc});
//                 break;
//             }   
//         }
        
//         //neeche
//         for(int r =kr ; r<8; r++){
//             if(m.find({r , kc}) != m.end())
//             {
//                 result.push_back({r, kc});
//                 break;
//             }
//         }
        
//         //left
//         for(int c= kc; c>=0; c--){
//             if(m.find({c, kr}) != m.end()){
//                 result.push_back({c,kr});
//                     break;
//             }
//         }
        
//         // right
//         for(int c=kc; c<8; c++){
//             if(m.find({c,kr}) != m.end()){
//                 result.push_back({c,kr});
//                 break;
//             }
//         }
        
//         // top left
//         int c = kc;
//         for(int r=kr; r>=0 and c>=0; r--)
//         {
//             if(m.find({r , c}) != m.end())
//             {
//                 result.push_back({r, c});
//                 break;
//             }
//             c--;
//         }
        
//        // top right
//         for(int r=kr, c = kc; r>=0 and c<8; r--, c++)
//         {
//             if(m.find({r , c}) != m.end())
//             {
//                 result.push_back({r, c});
//                 break;
//             }
//         }
        
//        // bottom left
//         for(int r=kr, c=kc; r<8 and c>=0; r++, c--)
//         {
//             if(m.find({r , c}) != m.end())
//             {
//                 result.push_back({r, c});
//                 break;
//             }
//         }
        
//         // bottom right
//         for(int r=kr, c=kc; r<8 and c<8; r++, c++)
//         {
//             if(m.find({r , c}) != m.end())
//             {
//                 result.push_back({r, c});
//                 break;
//             }
//         }
        
//         return result;
//     }
// };

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        
        vector<vector<int>> ans;
        
        map<pair<int, int>, bool>M;
        
        for(auto q:queens)
            M[{q[0], q[1]}] = true; 
        
        int kr = king[0], kc = king[1];
        
        // top
        for(int r=kr; r>=0; r--)
        {
            if(M.find({r , kc}) != M.end())
            {
                ans.push_back({r, kc});
                break;
            }
        }
        
        // down
        for(int r=kr; r<8; r++)
        {
            if(M.find({r , kc}) != M.end())
            {
                ans.push_back({r, kc});
                break;
            }
        }
        
        // left
        for(int c=kc; c>=0; c--)
        {
            if(M.find({kr , c}) != M.end())
            {
                ans.push_back({kr, c});
                break;
            }
        }
        
        // right
        for(int c=kc; c<8; c++)
        {
            if(M.find({kr , c}) != M.end())
            {
                ans.push_back({kr, c});
                break;
            }
        }
        
        // top left
        int c = kc;
        for(int r=kr; r>=0 and c>=0; r--)
        {
            if(M.find({r , c}) != M.end())
            {
                ans.push_back({r, c});
                break;
            }
            c--;
        }
        
        // top right
        for(int r=kr, c = kc; r>=0 and c<8; r--, c++)
        {
            if(M.find({r , c}) != M.end())
            {
                ans.push_back({r, c});
                break;
            }
        }
        
        // bottom left
        for(int r=kr, c=kc; r<8 and c>=0; r++, c--)
        {
            if(M.find({r , c}) != M.end())
            {
                ans.push_back({r, c});
                break;
            }
        }
        
        // bottom right
        for(int r=kr, c=kc; r<8 and c<8; r++, c++)
        {
            if(M.find({r , c}) != M.end())
            {
                ans.push_back({r, c});
                break;
            }
        }
        
        return ans;
    }
};