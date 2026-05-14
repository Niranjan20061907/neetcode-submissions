class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size()-1;
        int cap = 0;
        while (i < j){
            int curr = (j-i) * min(heights[i], heights[j]);
            cap = max(cap, curr);
            if (heights[i] > heights[j]) j--;
            else i++;
        }
    return cap;
    }
    
};
