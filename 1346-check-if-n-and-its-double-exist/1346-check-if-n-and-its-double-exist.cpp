class Solution {
public:
    bool checkIfExist(vector<int>& arr) {


        unordered_map<int , int> mp;
        for(int i=0 ; i<arr.size() ; i++){
            if(mp.find(arr[i]*2) != mp.end())
             return true;
            else if(arr[i]%2==0 && mp.find(arr[i]/2)!=mp.end())
             return true;
            else{
                mp[arr[i]]=1;
            }
        }
        return false;

        // bool flag = false;

        // for(int i=0 ; i<arr.size() ; i++){
        //     for(int j=i+1 ; j<arr.size() ; j++){
        //         if(arr[i] == 2*arr[j]){
        //             flag =true;
        //         }
        //     }
        // }
        // return flag;
        
    }
};