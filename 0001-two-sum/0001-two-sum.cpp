class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> have;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(have.count(req))
            {
                return {i,have[req]};
            }
            else have[nums[i]]=i;
        }
        return {};
        
    }
};