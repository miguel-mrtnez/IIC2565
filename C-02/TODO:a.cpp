#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int N, Q;
  cin >> N >> Q;

  vector<int> nums(N);
  for (int i = 0; i < N; i++) {
    cin >> nums[i];
  }

  for (int i = 0; i < Q; i++) {
    int l = 0, r = N - 1, q;
    cin >> q;                 
    while (r - l > 1) {
      int m = (l + r) / 2;
      if (nums[m] == q && nums[m - 1] != q) {
        cout << m << endl;
        break;
      } else if (nums[m] < q) {
        l = m;
      } else {
        r = m;
      }
    }
    if (r - l <= 1) {
      if (nums[l] == q) {
        cout << l << endl;
      } else if (nums[r] == q) {
        cout << r << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }

  return 0;
}