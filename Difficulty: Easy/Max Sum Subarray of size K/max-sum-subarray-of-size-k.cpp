class Solution {
  public:
    int maxSubarraySum(vector<int>& nums, int k) {
        // code here
        if(nums.size()==1) return nums[0];
            int sum = 0;
            for (int i = 0; i < k; i++) {
                sum += nums[i];
            }
            int mx=sum;
            int low=0,high=k-1;
            while(high<nums.size()){
                mx = max(mx, sum);
                low++;
                high++;
                sum=sum-nums[low-1];
                if(high==nums.size())
                    break;
                sum+= nums[high];
            }
        return mx;
    }
};