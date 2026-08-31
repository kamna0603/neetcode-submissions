class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;int r=heights.size()-1;
        int water=0;
        while(l<r){
            int waterstored=min(heights[l],heights[r])*(r-l);
            water=max(waterstored,water);
            heights[l]<heights[r]?l++:r--;
        }
        return water;
    }
};
