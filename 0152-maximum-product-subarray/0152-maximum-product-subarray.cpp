class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long cur_max = nums[0];
        long long cur_min = nums[0];
        long long ans = nums[0];

        for (int i = 1; i < n; i++) {
            long long curr = nums[i];

            long long max_p = cur_max * curr;
            long long min_p = cur_min * curr;

            cur_max = max({max_p, min_p, curr});
            cur_min = min({max_p, min_p, curr});

            ans = max(ans, cur_max);
        }

        return ans;
    }
};