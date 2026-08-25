class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int count[26] = {0};

        // Count letters in magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }

        // Use letters for ransomNote
        for (char c : ransomNote) {

            if (count[c - 'a'] == 0)
                return false;

            count[c - 'a']--;
        }

        return true;
    }
};