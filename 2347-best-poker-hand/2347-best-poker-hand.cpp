class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {

        unordered_set<char> sett;
        unordered_map<int,int> mapp;
        string s;
        for(auto i:suits){
            sett.insert(i);
        }

        if(sett.size()==1){
            s="Flush";
            return s;
        }

        for(auto i:ranks){
            mapp[i]++;
        }
        int maxi = 0;

        for(auto i:mapp){
            if(i.second > maxi){
                maxi = i.second;
            }
        }

        if(maxi > 2){
            s="Three of a Kind";
        }
        if(maxi==2){
            s="Pair";
        }

        if(maxi==1){
            s="High Card";
        }

        return s;
        
    }
};