#include <iostream>

int main(){
  int A = 0;
  int B = 0;
  int wa = 0;
  std::cin >> A >> B;
  A > B ? wa = A: wa = B;
  A > B ? A-- : B--;
  A > B ? wa +=A: wa +=B;
  std::cout << wa << std::endl;


}
