#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    bool isValid(std::vector<std::string>& board, int row, int col) {
        int size = board.size();
        for (int i = 0; i < size; ++i) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        
        for (int i = row - 1, j = col + 1; i >= 0 && j < size; --i, ++j) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }

    void backtrack(std::vector<std::string>& board, int row, std::vector<std::vector<std::string>>& res) {
        if (board.size() == row) {
            std::cout << "pushback\n";
            res.push_back(board);
            return;
        }

        int n = board[row].size();
        for (int col = 0; col < n; ++col) {
            if (!isValid(board, row, col)) {
                continue;
            }
            board[row][col] = 'Q';
            backtrack(board, row+1, res);
            board[row][col] = '.';
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        std::vector<std::vector<std::string>> res;
        std::vector<std::string> board(n, std::string(n, '.'));
        backtrack(board, 0, res);
        return res;
    }
};

int main() {
	Solution s;
    s.solveNQueens(4);

	Log("OK!");
}

