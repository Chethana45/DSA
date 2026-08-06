class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> ans;

        for (string word : words) {

            string row;

            char first = tolower(word[0]);

            if (row1.find(first) != string::npos)
                row = row1;
            else if (row2.find(first) != string::npos)
                row = row2;
            else
                row = row3;

            bool valid = true;

            for (char c : word) {

                c = tolower(c);

                if (row.find(c) == string::npos) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans.push_back(word);
        }

        return ans;
    }
};