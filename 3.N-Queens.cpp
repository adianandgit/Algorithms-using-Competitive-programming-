#include <bits/stdc++.h>
using namespace std;

void printer(vector<vector<char>> &grid) {
  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid.size(); j++) {
      if (grid[i][j] == 'Q') {
        cout << 'Q'<<" ";
      } else {
        cout << '-'<<" ";
      }
    }
    cout << "\n";
  }
  cout << "\n";
}
void place(vector<vector<char>> &grid, int row, int j) {
  grid[row][j] = 'Q';
  for (int k = 1; k + row < grid.size(); k++) {
    grid[row + k][j] = 'N';
    if (j - k > -1) {
      grid[row + k][j - k] = 'N';
    }
    if (j + k < grid.size()) {
      grid[row + k][j + k] = 'N';
    }
  }
}
void queen(int row, int n, vector<vector<char>> &grid, int *cnt) {
  if (row == n) {
    printer(grid);
    (*cnt)++;
    return;
  }
  for (int j = 0; j < n; j++) {
    vector<vector<char>> prevgrid = grid;
    if (grid[row][j] == 'Y') {
      place(grid, row, j);
      queen(row + 1, n, grid, cnt);
    }
    grid = prevgrid;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<char>> grid(n, vector<char>(n, 'Y'));
  int count = 0;
  queen(0, n, grid, &count);
  cout << "Total Count is: " << count;

  return 0;
}
