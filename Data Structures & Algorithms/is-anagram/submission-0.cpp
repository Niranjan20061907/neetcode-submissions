#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> c1;
        unordered_map<char, int> c2;

        for(char c : s){
            c1[c]++;
        }

        for(char c : t){
            c2[c]++;
        }

        return c1 == c2;
    }
};
