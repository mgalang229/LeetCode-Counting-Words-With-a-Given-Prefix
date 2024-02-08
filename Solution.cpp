class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for (string& w : words) {
            if (pref.size() > w.size())
                continue;
            int i = 0;
            while (i < pref.size()) {
                if (pref[i] == w[i])
                    i++;
                else
                    break;
            }
            cnt += (i == pref.size());
        }
        return cnt;
    }
};
