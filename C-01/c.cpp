#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  string str_nums;
  getline(cin >> ws, str_nums);

  vector<int> cumulative_sum;
  stringstream ss(str_nums);

  int num;
  ss >> num;
  cumulative_sum.push_back(num);

  while (ss >> num) {
    cumulative_sum.push_back(cumulative_sum.back() + num);
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i ++) {
    int l, r;
    cin >> l >> r;
    cout << cumulative_sum[r] - cumulative_sum[l - 1] << endl;
  }

  return 0;
}