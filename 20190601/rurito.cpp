#include <iostream>

int main(){
  int N,Y;
  int x=0,y=0,z=0;
  std::cin >> N >> Y;

for( int i = 0; i <= N  ; i++ )
{
  for( int j = 0; j <= N -i; j++ )
  {
    if(i*10000 + j*5000 + (N - i - j) * 1000 == Y)
    {
      std::cout << i <<" " << j << " "<<(N - i - j) << std::endl;
      return 0;
    }
  }
}

std::cout << -1 <<" " << -1 << " "<< -1<< std::endl;
return 0;

}
