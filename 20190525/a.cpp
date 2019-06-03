#include <iostream>
int main(){
  int A = 0;
  int B = 0;
  int money = 0;
  std::cin >> A >> B;

  if( A >= 13 )
  {
    money = B;
  }
  else if( A <= 12 && A >= 6 )
  {
    money = B / 2;
  }
  else
  {
    money = 0;
  }

  std::cout << money << std::endl;
  return 0;
}
