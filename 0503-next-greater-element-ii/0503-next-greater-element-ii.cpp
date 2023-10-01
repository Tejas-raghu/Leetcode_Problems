class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int> res;
        stack<int> st;
        int temp;

        for(int i=nums.size()-2 ; i>=0 ; i--){
            while(!st.empty() && st.top()<nums[i]){
                st.pop();
            }
            st.push(nums[i]);
        }

        for(int i=nums.size()-1 ; i>=0 ; i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            if(st.empty()) temp=-1;
            else{
                temp=st.top();
            }
            res.push_back(temp);
            st.push(nums[i]);
        }
        reverse(res.begin() , res.end());
        return res;
        
    }
};