class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int>prefix;
        vector<int>suffix;
        prefix.resize(n);
        suffix.resize(n);
        prefix[0]=suffix[n-1]=0;
        int ans=0;
        // calculate prefix & suffix   height
        int j= n-2;
         for( int i=1;i<n;i++){
            prefix[i]= max( prefix[i-1],height[i-1]);
            suffix[j]= max( suffix[j+1],height[j+1]);
            j--;

         }
         for( int i=0;i<n;i++){
            int curr= min( prefix[i],suffix[i])-height[i];
            if( curr>0)
            ans+=curr;
         }
         return ans;

        
    }
};
