#include <bits/stdc++.h>
using namespace std;
void permute(vector<bool> map, vector<int> &arr, vector<int> &ans,
             vector<vector<int>> &answers) {
  if (ans.size() == arr.size()) {
    answers.push_back(ans);
    return;
  }
  for (int i = 0; i < arr.size(); i++) {
    if (!map[i]) {
      map[i] = true;
      ans.push_back(arr[i]);
      permute(map, arr, ans, answers);
      map[i] = false;
      ans.pop_back();
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> arr(n), ans;
  vector<vector<int>> answers;
  vector<bool> map(n, false);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  permute(map, arr, ans, answers);
  cout << "[";
  for (int i = 0; i < answers.size() - 1; i++) {
    cout << "[";
    for (int j = 0; j < answers[i].size() - 1; j++) {
      cout << answers[i][j] << ",";
    }
    cout << answers[i].back() << "],";
  }
  cout << "[";
  for (int x = 0; x < answers.back().size() - 1; x++) {
    cout << answers.back()[x] << ",";
  }
  cout << answers.back().back() << "]]";
  return 0;
}
