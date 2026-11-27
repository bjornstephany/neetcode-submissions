class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> rows;
        unordered_map<int,unordered_set<char>> cols;
        map<pair<int,int>, unordered_set<char>> boxs;

        for ( int i = 0; i < 9; i++ )
        {
            for ( int j = 0; j < 9; j++ )
            {
                if ( board [i][j] == '.' ) { continue; }
                if ( rows[i].contains(board[i][j])) { return false; }
                if ( cols[j].contains(board[i][j])) { return false; }

                pair<int,int> box = { i / 3, j / 3 };
                if ( boxs[box].contains(board[i][j] )) { return false; }

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                boxs[box].insert(board[i][j]);
            }
        }
        return true;
    }
};
