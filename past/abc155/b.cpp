#include <iostream>
#include <vector>
int main(){
  int N = 0;
  int A = 0;
  bool ok = true;
  std::cin >> N;


  for(int i = 0; i < N; i++){
    std::cin >> A;
    if(A % 2 == 0){
      if( (A % 5 == 0) || (A % 3 == 0) ){
        ok = true;
        continue;
      }
      ok = false;
      break;
    }
  }
  if (ok){
    std::cout << "APPROVED" << std::endl;

  }else {
    std::cout << "DENIED" << std::endl;
  }

  return 0;
}
