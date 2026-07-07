class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
                int ans = 0;

                        for (int i = 0; i < s.size(); i++) {
                                    string temp = "";

                                                for (int j = i; j < s.size(); j++) {
                                                                bool found = false;

                                                                                for (char c : temp) {
                                                                                                    if (c == s[j]) {
                                                                                                                            found = true;
                                                                                                                                                    break;
                                                                                                                                                                        }
                                                                                                                                                                                        }

                                                                                                                                                                                                        if (found)
                                                                                                                                                                                                                            break;

                                                                                                                                                                                                                                            temp += s[j];
                                                                                                                                                                                                                                                            ans = max(ans, (int)temp.size());
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                        return ans;
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                            };