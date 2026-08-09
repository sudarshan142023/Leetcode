class Solution {
public:

    bool solve(vector<vector<char>>& board,
               vector<vector<bool>>& visited,
               string& word,
               int r, int c, int index)
    {
        if (index == word.size())
            return true;

        if (r < 0 || r >= board.size() ||
            c < 0 || c >= board[0].size())
            return false;

        if (visited[r][c] || board[r][c] != word[index])
            return false;

        visited[r][c] = true;

        bool found =
            solve(board, visited, word, r + 1, c, index + 1) ||
            solve(board, visited, word, r - 1, c, index + 1) ||
            solve(board, visited, word, r, c + 1, index + 1) ||
            solve(board, visited, word, r, c - 1, index + 1);

        visited[r][c] = false;   // backtrack

        return found;
    }

    bool exist(vector<vector<char>>& board, string word)
    {
        int m = board.size();
        int n = board[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (solve(board, visited, word, i, j, 0))
                    return true;
            }
        }

        return false;
    }
};