class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        unordered_map<char,int> mapp;
        int temp=0;
        int ans=-1;

        for(int i=0 ; i<s.length() ; i++){
            if(mapp.find(s[i]) != mapp.end()){
                temp = i - mapp[s[i]] - 1;
                ans=max(temp,ans);
            }
            else{
                mapp[s[i]]=i;
            }
        }

        for(auto i:mapp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        return ans;
        
    }
};