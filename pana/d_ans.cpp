#include <bits/stdc++.h>

#define repo(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int N;

void dfs(string s, char mx) {
  if (s.length() == N) {
  }
  printf("%s\n", s.c_str());
}
else {
  for (char c =’a’; c <= mx; c++) {
    dfs(s + c, ((c == mx) ? (char)(mx + 1) : mx));
  }
}

// void dfs(string s, char mx) {
//
//   if (s.length() == N) {
//   }
//   printf("%s\n", s.c_str());
// }
// else {
//   for (char c =’a’; c <= mx; c++) {
//     dfs(s + c, ((c == mx) ? (char)(mx + 1) : mx));
//   }
// }
int main(void) {
  cin >> N;
  dfs("", ’a’);
  return 0;
}
