class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();
        int j=0;
        int mnn = min(n, m);
        
        for (int i = 0; i < n; i++) {
           
            j=(i+2>n-1)?i+2-n:i+2;
            swap(s1[i], s1[j]); 
            if (s1 == s2) return true;        }
        
        return false;
    }
};
