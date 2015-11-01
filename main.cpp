class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int ctr1 = 0, ctr2 = 0;
        for(int i = 0; i < 9; i ++){
            vector<bool> arr1(9, false);
            vector<bool> arr2(9, false);
            vector<bool> arr3(9, false);
            int x = (i/3) * 3;
            int y = (i * 3) % 9;
            for(int j = 0; j < 9; j ++){
                if(board[i][j] !='.'){
                   if(arr1[board[i][j]-1 - '0']) return false;
                   else arr1[board[i][j]-1 - '0'] = true;
                }
                if(board[j][i] !='.'){
                   if(arr2[board[j][i]-1- '0']) return false;
                   else arr2[board[j][i]-1- '0'] = true;
                }
                if(board[x + j % 3][y + j / 3] !='.'){
                   if(arr3[board[x + j % 3][y + j / 3] - 1 - '0']) return false;
                   else arr3[board[x + j % 3][y + j / 3] - 1 - '0'] = true;
                }
            }//end for j
        }//end for i
        return true;
    }
};
