#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
// #include <algorithm>
int main(){
  int N = 0;
  std::string str;
  std::cin >> N;
  std::vector<std::string> S;
  std::vector<std::pair<std::string,int> > newS;
  std::vector<std::string> ans;

  for(int i =0; i  < N; i++) {
    std::cin >> str;
    S.push_back(str);
    if(newS.empty()){
      newS.push_back(std::make_pair(str, 1));
    }else{
      bool ok = false;
      for(auto & sss : newS){
        if(sss.first == str){
          sss.second++;
          ok = true;
          break;
        }
      }
      if(!ok)
      newS.push_back(std::make_pair(str, 1));
    }//else
  }
  // std::sort(S.begin(), S.end());
  int max = 0;
  for(auto & sss : newS){
    max = std::max(sss.second, max);
  }
  for(auto & sss : newS){
    if(sss.second == max){
      ans.push_back(sss.first);
    }
  }

  std::sort(ans.begin(), ans.end());

  for(int i = 0; i < ans.size(); i++){
    std::cout << ans[i] << std::endl;
  }




  return 0;
}
