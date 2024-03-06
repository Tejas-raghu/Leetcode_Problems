class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        unordered_map<int,int> count;
        int ans=0;

        for(int i=0 ; i<nums.size(); i++){
            count[nums[i]]++;
        }
        
        for(auto j : count){
            int temp = j.second;
            if(temp == 1) return -1;
            else{
                ans = ans+ ceil((double)(temp) / 3);
            }
        }
        return ans;
        
    }
};