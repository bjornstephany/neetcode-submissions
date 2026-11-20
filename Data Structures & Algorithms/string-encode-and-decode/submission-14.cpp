class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        res.push_back((char)strs.size());
        for ( string word : strs )
        {
            res.push_back((char)word.size());
            res += word;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int numOfWords = (unsigned char)s[0];
        int pos = 1;
        for ( int i = 0; i < numOfWords; i++ )
        {
            int wordLen = (unsigned char)s[pos];
            pos++;
            res.push_back(s.substr(pos, wordLen));
            pos += wordLen;
        }
        return res;
    }
};
