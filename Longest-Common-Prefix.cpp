
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];

        // Sort the given string array.
        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();

        string result;
        // Iterate over the characters of the first and last strings.
        int n = min(first.size(), last.size());
        for (int i = 0; i < n; i++) {
            if (first[i] != last[i]) {
                break;
            }
            result.push_back(first[i]);
        }
        return result;
    }
};