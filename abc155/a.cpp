#include <iostream>

int main(){
  int A, B , C;
  std::cin >> A >> B >> C;

  if(A == B && B != C && C!=A){
    std::cout << "Yes" << std::endl;
    return 0;
  }
  if(B == C && C != A && A!=B){
    std::cout << "Yes" << std::endl;
    return 0;
  }

  if(C == A && A != B && B!=C){
    std::cout << "Yes" << std::endl;
    return 0;
  }

  std::cout << "No" << std::endl;


  return 0;
}
