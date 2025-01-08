class Solution {
public://wrong
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for(;i<n-1;i++){
            if(nums[i+1]<=nums[i]) break;
        }
        int j=n-1;
        for(;j>0;j--){
            if(nums[j-1]>=nums[j]) break;
        }
        int ans=0;
            while(i>=0){
                int u = upper_bound(nums.begin()+j, nums.end(), nums[i])-nums.begin();
                ans += n-u+1;
                i--;
            }
        if(ans<(n*(n+1))/2){
            ans += n-j+1;
        }
        return ans;
       
    }
};