class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<vector<int>, vector<string>> res;
        
        for(const auto& s : strs){
            vector<int> count(26,0);
        
            for (char c : s){
                count[c - 'a']++;
            }            
        
            res[count].push_back(s);
        
        }
        
        vector<vector<string>> result;
        
        for(auto& pair : res){
            result.push_back(pair.second);
        }
        
        return result;
    }
};
