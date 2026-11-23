class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for ( vector<char> row : board )
        {
            unordered_set<char> currRow;
            for ( char c : row )
            {
                if ( c == '.') continue;
                if ( currRow.contains(c) )
                {
                    return false;
                }
                currRow.insert(c);
            }
        }
        for ( int c = 0; c < 9; c++ )
        {
            unordered_set<char> currCol;
            for ( int r = 0; r < 9; r++ )
            {
                char num = board[r][c];
                if ( num == '.') continue;
                if ( currCol.contains(num) )
                {
                    return false;
                }
                currCol.insert(num);
            }
        }
        for ( int colStart = 0; colStart < 9; colStart += 3 )
        {
            for ( int rowStart = 0; rowStart < 9; rowStart += 3 )
            {
                unordered_set<char> currBox;
                for ( int c = colStart; c < colStart + 3; c++ )
                {
                    for ( int r = rowStart; r < rowStart + 3; r++ )
                    {
                        char num = board[c][r];
                        if ( num == '.') continue;
                        if ( currBox.contains(num) )
                        {
                            return false;
                        }
                        currBox.insert(num);
                    }
                }
            }
        }
        return true;
    }
};
