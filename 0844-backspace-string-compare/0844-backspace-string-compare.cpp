class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st1;
        stack<char> st2;
        
        for (char c : s) {
            if (c == '#' && !st1.empty()) {
                st1.pop();
            } else if (c != '#') {
                st1.push(c);
            }
        }
        
        for (char c : t) {
            if (c == '#' && !st2.empty()) {
                st2.pop();
            } else if (c != '#') {
                st2.push(c);
            }
        }
        
        string s1 = "";
        while (!st1.empty()) {
            s1 = s1 + st1.top();
            st1.pop();
        }
        
        string t1 = "";
        while (!st2.empty()) {
            t1 = t1 + st2.top();
            st2.pop();
        }
        
        return s1 == t1;
    }
};
