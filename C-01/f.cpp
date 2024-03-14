#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<string> flamingoes;

  cout << "? 1 " << n << endl;

  int total;
  cin >> total;

  int last_sum = total;
  int right_sum;
  for (int i = 2; i < n; i++) {
    cout << "? " << i << " " << n << endl;
    cin >> right_sum;

    flamingoes.push_back(" ");
    flamingoes.push_back(to_string(last_sum - right_sum));

    last_sum = right_sum;
  }

  int left_sum;
  cout << "? 1 " << n - 1 << endl;
  cin >> left_sum;

  int last_right = total - left_sum;

  flamingoes.push_back(" ");
  flamingoes.push_back(to_string(last_sum - last_right));
  flamingoes.push_back(" ");
  flamingoes.push_back(to_string(last_right));
  
  string ans = accumulate(flamingoes.begin(), flamingoes.end(), string());
  cout << "!" << ans << endl;

  return 0;
}