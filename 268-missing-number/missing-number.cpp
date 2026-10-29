class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int normal_sum=(n*(n+1))/2;
        cout<<normal_sum<<endl;
        int actual_sum=0;
        for(int i=0;i<n;i++){
            actual_sum+=nums[i];
        }
        return normal_sum-actual_sum;
    }
};