class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int used1[9][9] = {(0,0)}, used2[9][9] = {(0,0)}, used3[9][9] = {(0,0)}; //putting all element's value 0 
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				if (board[i][j] != '.') {
					int num = board[i][j] - '1';  //for num value 0 to 8 we are doing -'1' //we are converting char to int
					int k = i / 3 * 3 + j / 3;
					if (used1[i][num] || used2[j][num] || used3[k][num]) //if(0) is false and if(any other no. than 0) is true
						return false;
					used1[i][num] = used2[j][num] = used3[k][num] = 1; //we can assign any no. other than 0
				}
			}
		}
		return true;	
    }
};