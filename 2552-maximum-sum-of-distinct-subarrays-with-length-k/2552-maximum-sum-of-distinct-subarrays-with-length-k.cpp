class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long result=0;
        unordered_set<int>st;
        int n=nums.size();
        int i=0,j=0;
        long long  sum=0;
        while(j<n)
        {
            while(st.count(nums[j]))
            {
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            sum+=nums[j];
            st.insert(nums[j]);
            if(j-i+1==k)
            {
                result=max(sum, result);
                sum-=nums[i];
                st.erase(nums[i]);
                i++;

            }
            j++;


        }
        return result;
        
    }
};