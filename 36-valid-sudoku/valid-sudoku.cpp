class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        set<int> row[9];
        set<int> col[9];
        set<int> boxs[9];

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.')
                continue;

                int num = board[i][j] - '0';

                int box = (i/3 * 3) + j/3;

                if(row[i].count(num))
                return false;

                if(col[j].count(num))
                return false;

                if(boxs[box].count(num))
                return false;

                row[i].insert(num);
                col[j].insert(num);
                boxs[box].insert(num);
            }
        }

        return true;
        
    }
};