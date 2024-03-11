#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;

    vector<char> sequence;
    for (int j = 0; j < n; j++) {
      sequence.push_back('(');
      sequence.push_back(')');
    }

    string str_sequence = accumulate(sequence.begin(), sequence.end(), string());
    cout << str_sequence << endl;

    for (int k = 1; k < 2 * n - 2; k += 2) {
      int l = k;
      int r = l + 1;
      
      sequence[l] = '(';
      sequence[r] = ')';

      string str_sequence = accumulate(sequence.begin(), sequence.end(), string());
      cout << str_sequence << endl;

      sequence[l] = ')';
      sequence[r] = '(';
    }
  }

  return 0;
}