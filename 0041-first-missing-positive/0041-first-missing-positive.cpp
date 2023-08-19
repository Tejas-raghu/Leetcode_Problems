class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            int ele = nums[i];

            if(ele >0 && ele <=n){
                int pos = ele-1;
            if(nums[pos]!=ele){
                swap(nums[i],nums[pos]);
                i--;
            }
            }
        }

        for(int i=0 ; i<n ; i++){
            if(i+1 != nums[i]) return i+1;
        }
        return n+1;
    }
};
