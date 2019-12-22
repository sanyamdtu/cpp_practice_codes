#include<bits/stdc++.h>
using namespace std;
int n, m;
int arr[10][10];
void show(int row, int column) {
  if (row < n / 2 && column < m / 2) {
    cout << "END";
    return;
  } else {
    for (int i = n - row; i < row && row > n / 2; i++)
      cout << arr[i][m - column] << ", ";
    for (int i = m - column+1; i < column && column > m / 2; i++)
      cout << arr[row - 1][i] << ", ";
    for (int i = row - 2; i >= n - row && row > n / 2; i--)
      cout << arr[i][column - 1] << ", ";
    for (int i = column - 2; i >= m - column + 1 && column > m / 2; i--)
      cout << arr[n - row][i] << ", ";
    show(row - 1, column - 1);
  }
}
int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];
  }
  show(n, m);
  return 0;
}
