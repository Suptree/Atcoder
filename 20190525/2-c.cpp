#include <iostream>
#include <algorithm>
int main(){

  int N =0, M = 0;
  std::cin >> N >> M;

  int ans = 0;
  int L = 0, R = 0;
  int L_max = N, R_min = M;


  for(int i =0; i <= M; i++)
  {

    std::cin >> L >> R;
    L_max = std::max(L_max,L);
    R_min = std::min(R_min,R);



  }

  // for(int i = 0; i <= M; i++)
  // {
  //   printf("__________________\n");
  //   if(L[i] < L[i+1] && R[i] < R[i+1])
  //   {
  //     L_max = std::max(L_max,L[i+1]);
  //     R_min = std::min(R_min,R[i+1]);
  //   }
  //   else
  //   {
  //     break;
  //   }
  //   printf("L_maxの値は%d\n",L_max );
  //   printf("R_minの値は%d\n",R_min );
  // }

  ans = R_min - L_max + 1;
  ans = std::max(ans,0);
  std::cout << ans << std::endl;
}
