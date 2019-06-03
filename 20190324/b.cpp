#include <iostream>
#include <array>
#include <vector>
#include <string>

int main(){
  std::string a ;
  std::cin >> a;
  int count = 0;
  int n = 0;
  std::array<int, 10> num;

  for(int i = 0;a == '0';i++){
    if(a[i]=='A' ||a[i]=='C'||a[i]=='G'||a[i]=='T'){
      count++;
    }else{
      num[n] = count;
      n++;
      count = 0;
    }
  }
  std::sort(num.begin(),num.end());
  std::cout << num.at(0) << std::endl;
}
