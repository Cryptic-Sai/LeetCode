class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int size = students.size();
        queue<int> result;
        
        for(int i=0; i<size; ++i){
            result.push(students[i]);
        }
        int rotations = 0 , i = 0;
        while(result.size() && rotations < result.size()){
            if(result.front() == sandwiches[i]){
                result.pop();
                i++;
                rotations = 0;
            } else {
                int choice = result.front();
                result.pop();
                result.push(choice);
                rotations++;
            }
        }
        return result.size();
    }
};