#include <iostream>

int main(){
  int N =0, M = 0;
  std::cin >> N >> M;
  int L[M+2] = {0}, R[M+2] = {0};
  int count[100001] ={0};
  int ans = 0;
  for(int i =1; i <= M; i++)
  {
    std::cin >> L[i] >> R[i];
  }

  // for(int m = 1; m <= M; m++)
  // {
  //   for(int i = L[m]; i <= R[m]; i++)
  //   {
  //
  //   }
  // }
  for(int m = 1; m <= M; m++)
  {
    // printf("%d_____________________\n",m );

    for(int i = L[1]; i <= R[1]; i++)
    {
      // printf("L[1]の値は%d\n",L[1]);
      // printf("R[1]の値は%d\n",R[1]);
      //
      // printf("iの番号は%d\n",i );

       for(int j = L[m+1]; j <= R[m+1]; j++)
       {
         // printf("L[m+1]の値は%d\n",L[m+1]);
         //
         // printf("jの番号は%d\n",j );
         if( i == j )
         {

           count[i]++;
           // printf("チャリン\n", count[i]);

         }
       }
    }
  }

  for(int i = L[1]; i <= R[1]; i++)
  {
    if( count[i] == M-1)
      ans++;
  }
  std::cout << ans << std::endl;
}
