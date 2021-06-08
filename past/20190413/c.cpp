#include <iostream>
#include <string>
int main(){
  std::string S;
  std::string tasi;
  int j = 0;
  std::cin >> S;
  tasi.push_back(S.at(0));
  int count = 0;
  for(int i =1;i <S.length();i++){

      if( tasi.at(j)==S.at(i) ){
        count++;
        S.at(i) == '1'?tasi.push_back('0'):tasi.push_back('1');
      }else{
        tasi.push_back(S.at(i));
      }
      j++;
  }
  std::cout << count << std::endl;
  }
