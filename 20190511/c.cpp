#include <iostream>
#include <string>
#include <vector>
int main(){
  int N = 0;
  bool A = false;
  int count = 0;
  // bool B = false;
  std::cin >> N;
  std::vector<std::string> str;
  std::string s;
  for( int i = 0; i < N; i++){
    std::cin >> s;
    str.push_back(s);
  }

  for(int i = 0; i < str.size(); i++)
  {
    for(int j = 0; j < str[i].length(); j++)
    {
      if( str[i].at(j) == 'A' && !A){
        A = true;
      }else if(str[i].at(j) == 'B' && A){
        count++;
        A = false;
      }


    }
  }

  std::cout << count << std::endl;

  // std::cout << str << std::endl;
}
