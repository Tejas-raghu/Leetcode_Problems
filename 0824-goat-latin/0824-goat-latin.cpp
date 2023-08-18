class Solution {
public:
    
    bool isVowel(char c){
        c=tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u'; 
    }
    
    
    string convert(string curr , int count){
        if(isVowel(curr[0])) curr=curr+"ma";
        else{
            curr=curr+curr[0];
            curr=curr.substr(1);
            curr=curr+"ma";
        }
        for(int i=1 ; i<=count ;i++){
            curr=curr+'a';
        }
        return curr;
    }
    
    
    string toGoatLatin(string sentence) {
        
        string ans="";
        sentence.push_back(' ');
        string curr="";
        int count = 1;
        
        for(int i=0 ; i<sentence.size();i++){
            if(sentence[i]==' '){
                
                ans += convert(curr , count);
                ans += " ";
                curr="";
                count++;
                
            }
            else{
                curr=curr + sentence[i];
            }
        }
        ans.pop_back();
        return ans;
        
        
    }
};