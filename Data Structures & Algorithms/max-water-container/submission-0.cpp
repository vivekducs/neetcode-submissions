class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int ans= INT_MIN;
        int i=0;
        int j=n-1;
        while( i<j){
           int curr=min(nums[i],nums[j]) *(j-i);
           ans= max( ans,curr);
           if( nums[i]<nums[j])
           i++;
           else j--;
        }
        return ans;

        
    }
};
