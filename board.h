#include <vector>

using namespace std;

class Board {
private:
/*
0 is empty
1 is black
2 is white
3 is wall
 for go that is
*/
	int m,n;
	int turn; // 1 or 2
	vector<vector<int>> board;
public:
	Board(int,int);
	void print();
	void move(int,int);
};
