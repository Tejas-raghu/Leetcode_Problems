class Solution {
public:
    static bool comp(pair<int,int> a , pair<int,int> b){
        return a.second<b.second;
    }

    int findLongestChain(vector<vector<int>>& pairs) {

        vector<pair<int,int>> vec;

        for(int i=0 ; i<pairs.size() ; i++){
            vec.push_back({pairs[i][0] , pairs[i][1]});
        }

        sort(vec.begin() , vec.end() , comp);

        int i=0 ; 
        int j=1;
        int count = 1;

        int n=vec.size();

        while(j<n){
            if(vec[i].second < vec[j].first){
                count++;
                i=j;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
        
    }
};