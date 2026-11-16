class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        int seen[26] = {0};
        for(char c:s)
        {
            int index = c - 'a';
            ++seen[index];
        }

        for(char c:t)
        {
            int index = c - 'a';
            --seen[index];
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(seen[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};
