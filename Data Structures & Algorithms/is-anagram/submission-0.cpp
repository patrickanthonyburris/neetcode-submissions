#include <unordered_map>
#include <string>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, int> freq_s;
        for(char c : s) {
            freq_s[c]++;
        }
        std::unordered_map<char, int> freq_t;
        for(char c : t) {
            freq_t[c]++;
        }
        for(char c : s) {
            if(freq_s[c] != freq_t[c]) {
                return false;
            }
        }
    return true;
    }
};
