class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ans(nums.size());
        int i=1,j=nums.size()-1;
        while(i<nums.size())
        {
            ans[i]=nums[j];
            i+=2;
            j--;
        }
        i=0;
         while(i<nums.size())
        {
            ans[i]=nums[j];
            i+=2;
            j--;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=ans[i];
        }

        
    }
};