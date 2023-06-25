//o(n) Time Complexcity
//o(1) Space Complexcity
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> charsMemo(128, 0);
        for (int i = 0; i < s.size(); i++) {
            charsMemo[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (charsMemo[s[i]] == 1) {
                return i;
            }
        }
        return -1;

    }
};
