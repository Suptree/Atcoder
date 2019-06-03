#include <iostream>

int main(){
  int N = 0;
  int K = 0;

  std::cin >> N >> K;

  int ans = 0;

  ans = N - K + 1;

  std::cout << ans  << std::endl;
}
