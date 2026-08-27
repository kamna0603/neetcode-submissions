class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            int more=target-ele;
            if(mp.find(more)!=mp.end())return {mp[more],i};
            mp[ele]=i;
        } 
        return {};
    }
};
