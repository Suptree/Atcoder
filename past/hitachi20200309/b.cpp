#include <bits/stdc++.h>

using namespace std;

int main() {
  int A = 0, B = 0, M = 0;

  cin >> A >> B >> M;
  int a_m = 0;
  vector<int> a;
  int a_min = 1000000;
  for (int i = 0; i < A; i++) {
    cin >> a_m;
    a_min = min(a_m, a_min);
    a.push_back(a_m);
  }
  int b_m = 0;
  vector<int> b;
  int b_min = 1000000;
  for (int i = 0; i < B; i++) {
    cin >> b_m;
    b_min = min(b_min, b_m);
    b.push_back(b_m);
  }
  int money_min = a_min + b_min;
  int x = 0;
  int y = 0;
  int money = 0;
  int point_x =0;
  int point_b =0;
  for (int i = 0; i < M; i++) {
    cin >> x >> y >> money;
    point_x = a.at(x-1);
    point_b = b.at(y-1);
    money_min = min(money_min, (point_x + point_b - money));
  }
    
  
  cout <<max(money_min,0) << endl;
  return 0;
}
