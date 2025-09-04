#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vi arr(n);
  REP(i, 0, n) { cin >> arr[i]; }
  int max = 0;
  REP(i, 0, n) {
    int sum = 0;
    REP(j, i, n) {
      sum += arr[j];
      if (max < sum) {
        max = sum;
      }
    }
  }
  cout << "Max Subarray sum is: " << max;
  return 0;
}