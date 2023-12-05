#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

const int dx[] = { -1, -1, -1, 0, 1, 1, 1, 0, 0 };
const int dy[] = { -1, 0, 1, 1, 1, 0, -1, -1, 0 };

bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int countBombs(const vector<vector<int>>& board) {
    int count = 0;
    for (const vector<int>& row : board) {
        for (int cell : row) {
            count += cell;
        }
    }
    return count;
}

double calculatePercentage(int bombs, int totalCells) {
    if (totalCells == 0) {
        return 0.0;
    }
    return (static_cast<double>(bombs) / totalCells) * 100;
}

void solveMinesweeper(vector<vector<int>>& board, vector<vector<char>>& result) {
    int n = board.size();
    int m = board[0].size();
    int totalCells = n * m;

    int bombCount = countBombs(board);
    double percentage = calculatePercentage(bombCount, totalCells);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 1) {
                result[i][j] = 'x';
            } else {
                result[i][j] = '-';
            }
        }
    }

    cout << bombCount << " " << fixed << setprecision(2) << percentage << "%" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> board(n, vector<int>(m));
    vector<vector<char>> result(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            board[i][j] = row[j] - '0';
        }
    }

    solveMinesweeper(board, result);

    return 0;
}
