class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};

        for (int d : digits) {
            freq[d]++;
        }

        int ans = 0;

        for (int num = 100; num <= 998; num += 2) {
            int n = num;
            int need[10] = {};

            for (int i = 0; i < 3; i++) {
                need[n % 10]++;
                n /= 10;
            }

            bool possible = true;

            for (int d = 0; d <= 9; d++) {
                if (need[d] > freq[d]) {
                    possible = false;
                    break;
                }
            }

            if (possible)
                ans++;
        }

        return ans;
    }
};