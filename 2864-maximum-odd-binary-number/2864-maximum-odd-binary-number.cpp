class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int size = s.length();
        int n = 0;
        int i;
        for (i = 0; i < size; i++) {
            if (s[i] == '1') {
                n++;
            }
        }
        i = i - 1;
        if (n > 0 && s[i] != '1') {
            cout << n;
            int j = 0;
            while (s[j] == '0') {
                j++;
            }
            cout << "j " << j;
            s[i] = s[j];
            s[j] = '0';
        }
        if (n > 1) {
            for (int i = 0; i < size - 1; i++) {
                cout << s[i];
                if (s[i] == '1') {
                    continue;
                } else {
                    for (int j = i + 1; j < size - 1; j++) {
                        if (s[j] == '1') {
                            s[i] = s[j];
                            s[j] = '0';
                            i++;
                        }
                    }
                }
            }
        }
        return s;
    }
};