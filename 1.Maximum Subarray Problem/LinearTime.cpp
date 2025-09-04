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
  int best = 0;
  int sum = 0;
  REP(i, 0, n) {

    sum = max(sum + arr[i], arr[i]);
    best = max(sum, best);
  }

  cout << "Max Subarray sum is: " << best;
  return 0;
}