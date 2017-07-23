#include "board.h"

Board::Board(int m, int n) : m(m),n(n) {
	board.resize(m,vector<int>(n,3)); // in general, 3 is wall
	for (int i = 1; i < m-1; ++i) { // 0 is empty
		for (int j = 0; j < n-1; ++j) {
			board[m][n] = 0;
		}
	}
}

void Board::print() {
	for (int i = 1; i < m-1; ++i) {
		for (int j = 0; j < n-1; ++j) {
			board[m][n] = 0;
		}
	}
}

