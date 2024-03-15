class Solution {
    private:
        void solve(string digits, string output, int index, vector<string>&ans,string mapping[]){
            
//             base case
            if(index >= digits.length()){
                ans.push_back(output);
                return;
            }
            
            int number = digits[index] - '0';
            string val = mapping[number];
            
            for(int i=0; i<val.length(); i++){
                output.push_back(val[i]);
                solve(digits, output, index+1, ans, mapping);
                output.pop_back();
            }
        }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        string output = "";
        int index = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

// class Solution {
// private:
//     void solve(string digits, string output, int index, vector<string>& ans, string mapping[]) {
//         // base case
//         if (index >= digits.length()) {
//             ans.push_back(output);
//             return;
//         }

//         int number = digits[index] - '0';
//         string val = mapping[number];

//         for (int i = 0; i < val.length(); i++) {
//             string new_output = output + val[i]; // Append current character to output
//             solve(digits, new_output, index + 1, ans, mapping); // Recurse with updated output
//         }
//     }

// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if (digits.length() == 0) {
//             return ans;
//         }
//         string output = "";
//         int index = 0;
//         string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//         solve(digits, output, index, ans, mapping);
//         return ans; // Return the result
//     }
// };