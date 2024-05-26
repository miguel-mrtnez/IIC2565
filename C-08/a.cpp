#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  
  int N;
  cin >> N;

  string s;
  getline(cin >> ws, s);
  stringstream ss(s);

  int num;
  vector<int> costs;
  while (ss >> num) {
    costs.push_back(num);
  }

  vector<int> mem(N, 0);
  mem[0] = 0;

  for (int i = 1; i < N; i++) {
    int one = mem[i - 1] + abs(costs[i] - costs[i - 1]);
    int two = INT_MAX;

    if (i > 1) {
      two = mem[i - 2] + abs(costs[i] - costs[i - 2]);
    }

    mem[i] = min(one, two);
  }
  cout << mem[N - 1] << endl;

  return 0;
}