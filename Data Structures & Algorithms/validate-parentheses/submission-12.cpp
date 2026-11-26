class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        stack<char> open;
        for ( int i = 0; i < len; i++ )
        {
            char c = s[i];
            if ( c == '(' || c == '{' || c == '[' )
            {
                open.push(s[i]);
                continue;
            }

            if(open.empty()) return false;
            char t = open.top();

            switch(t) {
                case '(':
                    if ( c != ')') { return false; }
                    break;
                case '{':
                    if ( c != '}') { return false; }
                    break;
                case '[':
                    if ( c != ']') { return false; }
                    break;
            }

            open.pop();
        }
        return open.empty();
    }
};
