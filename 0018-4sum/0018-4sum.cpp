class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans;

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int a = nums[i];

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int b = nums[j];
                long long t = (long long)target - a - b;

                int low = j + 1;
                int high = n - 1;

                while (low < high) {
                    long long c = (long long)nums[low] + nums[high];

                    if (c == t) {
                        ans.push_back({a, b, nums[low], nums[high]});

                        while (low < high && nums[low] == nums[low + 1])
                            low++;

                        while (low < high && nums[high] == nums[high - 1])
                            high--;

                        low++;
                        high--;
                    }
                    else if (c < t) {
                        low++;
                    }
                    else {
                        high--;
                    }
                }
            }
        }

        return ans;
    }
};