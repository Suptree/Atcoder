#include <iostream>

int main(){
  char a = 'a';//aで初期化
  std::cin >> a;
  if(a=='A'){
    std::cout << 'T' << std::endl;
  }else if(a=='T'){
    std::cout << 'A' << std::endl;
  }else if(a =='C'){
    std::cout << 'G' << std::endl;
  }else{
    std::cout << 'C' << std::endl;
  }
}
