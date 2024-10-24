// In the N-Queens problem, you're given an N×N chessboard and you need to place N queens on the board in such a way that no two queens threaten each other. Backtracking can be used to systematically try different queen placements and backtrack when a solution is not feasible.


#include <vector>
#include <string>
#include <cmath>

class Solution {
public:
    std::vector<std::vector<std::string>> solveNQueens(int n) {
        std::vector<std::vector<std::string>> result;
        std::vector<int> queens(n, -1); // queen[i] represents the column index of the queen in row i
        solveNQueensUtil(queens, 0, result);
        return result;
    }

private:
    void solveNQueensUtil(std::vector<int>& queens, int row, std::vector<std::vector<std::string>>& result) {
        int n = queens.size();
        if (row == n) {
            result.push_back(generateBoard(queens));
            return;
        }
        for (int col = 0; col < n; ++col) {
            if (isValid(queens, row, col)) {
                queens[row] = col;
                solveNQueensUtil(queens, row + 1, result);
                queens[row] = -1; // backtrack
            }
        }
    }

    bool isValid(const std::vector<int>& queens, int row, int col) {
        for (int i = 0; i < row; ++i) {
            if (queens[i] == col || std::abs(row - i) == std::abs(col - queens[i]))
                return false;
        }
        return true;
    }

    std::vector<std::string> generateBoard(const std::vector<int>& queens) {
        int n = queens.size();
        std::vector<std::string> board(n, std::string(n, '.'));
        for (int i = 0; i < n; ++i)
            board[i][queens[i]] = 'Q';
        return board;
    }
};
