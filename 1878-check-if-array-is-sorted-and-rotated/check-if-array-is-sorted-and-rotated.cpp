class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
       

        int p=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                p++;
                if(nums[i]<nums[n-1]){
                    return false;
                }

            }
        }
        if(p>1){ 
        return false;
        }

        if(nums[0]<nums[n-1]&&p!=0){
                    return false;
                }
    
    return true;
    }
};