class Solution {
public:
    string reorganizeString(string s) {

          if(s.size() <= 1) return s;

        unordered_map<char,int>mpp;

        for(auto &it : s) mpp[it]++;
        

        if(mpp.size()==1) return "";


        priority_queue<pair<int,char>>vp;
        string res;


        for(auto &it : mpp)  vp.push({it.second,it.first});
        

          while(vp.top().first > 0)
        {
            pair<int,char> p = vp.top();
            vp.pop();

            res.push_back(p.second);
            p.first--;

            pair<int,char> p2 = vp.top();
            vp.pop();

            if(p2.first > 0)
            {
                res.push_back(p2.second);
                p2.first--;
            }

            vp.push(p);
            vp.push(p2);
        }

        for(int i=0;i<res.size()-1;++i)
        {
            if(res[i]==res[i+1]) return "";
        }

        return res;

//         if(s.size()<=1) return s;
// 	unordered_map<char,int> map;
// 	for(auto i:s) map[i]++;

// 	priority_queue<pair<int,char>> pq;

// 	for(auto it:map){
// 		pq.push({it.second,it.first});
// 	}
// 	string ans;

// 	while(pq.top().first>0){
// 		pair<int,char> top2;
// 		pair<int,char> top1 = pq.top();
// 		pq.pop();
// 		ans.push_back(top1.second);
// 		top1.first--;

	
// 		top2 = pq.top();
// 		pq.pop();
//         if(top2.first > 0) {
//          ans.push_back(top2.second);
//          top2.first--;
//         }

//         pq.push(top1);
// 		pq.push(top2);

// 	}

// 	for(int i=0 ; i<ans.size()-1 ;i++){
// 		if(ans[i]==ans[i+1]){
// 			return "";
// 		}
// 		// cout<<ans[i]<<endl;
// 	}
// 	return ans;
        
    }
};