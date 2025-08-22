#include <bits/stdc++.h>
using namespace std;
void printsubs(vector<int> &arr, int k, vector<int> &subset) {
  if (k == arr.size()) {
    if (subset.size() == 0) {
      cout << "{ }\n";
      return;
    }
    cout << "{";
    for (int j = 0; j < subset.size() - 1; j++) {
      cout << subset[j] << ",";
    }
    cout << subset.back() << "}\n";
    return;
  } else {
    printsubs(arr, k + 1, subset);
    subset.push_back(arr[k]);
    printsubs(arr, k + 1, subset);
    subset.pop_back();
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> arr(n), subset;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  printsubs(arr, 0, subset);
  return 0;
}
