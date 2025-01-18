class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int rows=board.size();
        int col=board[0].size();
        if(rows==0)
        return 0;
        int count=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {if(board[i][j]=='X')
            {
              if(i>0 && board[i-1][j]=='X') continue;
              if(j>0 && board[i][j-1]=='X') continue;
              count++;
            }
            }
        }
        return count;
    }
};