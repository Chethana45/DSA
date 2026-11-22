
class Solution {
public:
    bool checkString(string s) {
        return s.find('b') == string::npos ||
               s.rfind('a') == string::npos ||
               s.rfind('a') < s.find('b');
    }
};
