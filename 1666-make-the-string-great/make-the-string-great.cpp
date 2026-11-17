class Solution {
public:
    string makeGood(string s) {

        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (!result.empty() && std::abs(result.back() - s[i]) == 32) {
                result.pop_back();

            } else {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};