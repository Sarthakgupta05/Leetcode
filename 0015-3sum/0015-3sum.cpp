
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int target = -nums[i];
            unordered_map<int, int> mp;

            for (int j = i + 1; j < n; j++) {
                int req = target - nums[j];

                if (mp.find(req) != mp.end()) {
                    ans.push_back({nums[i], req, nums[j]});

                    while (j + 1 < n && nums[j] == nums[j + 1])
                        j++;
                }

                mp[nums[j]] = 1;
            }
        }

        return ans;
    }
};
