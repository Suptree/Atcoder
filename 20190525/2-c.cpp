#include <iostream>
#include <algorithm>
int main(){
  //NとMの値を初期化
  int N =0, M = 0;
  std::cin >> N >> M;

  int L = 0;
  int R = 0;
  int L_max = 0;
  int R_min = 100005;

  for(int i =0; i <  M; i++)
  {
    std::cin >> L >> R;
    L_max = std::max(L_max,L);
    R_min = std::min(R_min,R);
  }
  if( R_min >= L_max )
    std::cout << R_min - L_max + 1 << std::endl;
  else
    std::cout << 0 << std::endl;

  return 0;
}
