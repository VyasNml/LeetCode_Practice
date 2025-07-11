class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";
        if (s == t) return t;
        map<char, int> freqt;
        for (char ch : t) {
            freqt[ch]++;
        }
        map<char, int> freqs;
        int i = 0, j = 0, minLen = INT_MAX, start = 0;
        int have = 0, need = freqt.size();

        while (j < s.size()) {
            char endChar = s[j];
            freqs[endChar]++;

            if (freqt.count(endChar) && freqs[endChar] == freqt[endChar]) {
                have++;
            }
            while (have == need) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }

                char startChar = s[i];
                freqs[startChar]--;
                if (freqt.count(startChar) && freqs[startChar] < freqt[startChar]) {
                    have--;
                }
                i++;
            }
            j++;
        }
        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
