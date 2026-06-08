class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>product(n,0);
        vector<int>prefix(n,1);
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        int suffix=1;
        for( int j=n-1;j>=0;j--){
            product[j]=suffix*prefix[j];
            suffix*=nums[j];

        }
        return product;
    }
    };

