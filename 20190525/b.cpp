#include <iostream>

int main(){
  int r = 0;
  int x_2000 = 0;
  int D = 0;
  int x[20];
  std::cin>> r >> D >> x_2000;
  x[0] = x_2000;
  // printf("%d\n",x[0]);

  for(int i = 0; i < 10; i++)
  {
    x[i+1] = ( r * x[i] ) - D;
    printf("%d\n",x[i+1]);
  }
}
