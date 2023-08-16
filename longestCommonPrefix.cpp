#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        if (strs.empty())
            return ans;
        
        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];
            bool match = true;
            
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].length() || ch != strs[j][i]) {
                    match = false;
                    break;
                }
            }
            
            if (!match)
                break;
            
            ans.push_back(ch);
        }
        
        return ans;
    }
};