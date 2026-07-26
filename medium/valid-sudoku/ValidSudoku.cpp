//
// Created by Артемий on 26/07/2026.
//

#include "ValidSudoku.h"

bool ValidSudoku::isValidSudoku(std::vector<std::vector<char>>& board) {
    size_t rows_size = board.size();
    size_t cols_size = board[0].size();

    std::vector<std::set<char>> cols(cols_size);
    std::vector<std::set<char>> rows(rows_size);
    std::vector<std::set<char>> quads(9);

    for (int row = 0; row < rows_size; ++row) {
        for (int col = 0; col < cols_size; ++col) {
            char symbol = board[row][col];

            int row_quad = row / 3, col_quad = col / 3;

            int quad = row_quad * 3 + col_quad;

            if (symbol == '.') continue;

            if (cols[col].contains(symbol) || rows[row].contains(symbol) || quads[quad].contains(symbol)) {
                return false;
            }

            cols[col].insert(symbol);
            rows[row].insert(symbol);
            quads[quad].insert(symbol);
        }
    }

    return true;
}
