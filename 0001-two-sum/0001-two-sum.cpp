class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> rem;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(rem[need]){
                return {i,rem[need]-1};
            }
            else{
                rem[nums[i]]=i+1;
            }
        }
        return {0};
    }
};