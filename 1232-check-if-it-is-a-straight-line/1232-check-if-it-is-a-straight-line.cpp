class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coor) {
        
        // // int coordinates = ans[i][j];
        // for(int i=0; i<coordinates.size(); i++){
        //     for(int j=0; j<coordinates.size(); j++){
        //         if(coordinates[i][j] == coordinates[j][j+1]){
        //             return true;
        //         }else{
        //             return false;
        //         }
        //     }
        // }
        // return coordinates;
          
        for(int i=2;i<coor.size();i++)
        {
          if((coor[1][1]-coor[0][1])*(coor[i][0]-coor[1][0])!=(coor[1][0]-coor[0][0])*(coor[i][1]-coor[1][1]))
          {
              return false;
          }
        }
        
        return true;
    }
    
};