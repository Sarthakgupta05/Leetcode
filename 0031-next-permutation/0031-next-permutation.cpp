class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n=nums.size()-1;
        int a=n;
        while(n>=1){
            if(nums[n]>nums[n-1]){
                int b=nums[n-1];
                for(int i=a;i>=n;i--){
                    if(b<nums[i]){
                        int c=nums[i];
                        nums[i]=b;
                        nums[n-1]=c;
                        break;
                    }
                }
                sort(nums.begin()+n,nums.end());
                return;
            }
            n--;
        }
        if(n==0){
            reverse(nums.begin(),nums.end());
        }

        
    }
};