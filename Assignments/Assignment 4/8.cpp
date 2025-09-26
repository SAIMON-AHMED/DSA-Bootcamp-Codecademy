// https://leetcode.com/problems/sort-characters-by-frequency/
class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char, int>> freq;
        vector<int> temp(128, 0);
        string res = "";
        for (auto c : s) {
            temp[c]++;
        }
        for (int ch = 0; ch < 128; ch++) {
            if (temp[ch] > 0)
                freq.push_back({char(ch), temp[ch]});
        }

        sort(freq.begin(), freq.end(), [](auto& a, auto& b) {
            return a.second > b.second; // sort by frequency
        });

        for (int i = 0; i < (int)freq.size(); i++) {
            res.append(freq[i].second, freq[i].first); // repeat char
        }

        return res;
    }
};