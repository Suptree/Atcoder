#include <iostream>
#include <string>
int main(){
  std::string str;
  std::string saki;
  int N =0;
  int K =0;
  int j = 0;
  int zero[10000];
  int kazu[10000];
  int count = 0;
  std::cin >> N >>K;
  std::cin >> str;
  bool maezero = false;
  //str.find('0');
  //saki.push_back(str.at(0));
  //ゼロの場所を探すだけ
  for(int i =0;i <str.length();i++){
    if(str.at(i)=='0'){//文字列がゼロのとき
      //kazu[j] +=1
      if(maezero){//前の文字が0だったらbreak
        break;
      }

      zero[j] = i;//文字列の０の前からの順番を示す
      maezero = true;
      j++;//jを足す。jは0の出現回数

    }else{
      maezero = false;
      count = 0;
    }

  //}
//  std::cout << j << std::endl;
  std::cout << str.cbegin() << std::endl;
  std::cout << str.find('0') << std::endl;
  std::cout << str.find('0') << std::endl;



  }

  // if( tasi.at(j)==str.at(i) ){
  //   count++;
  //   str.at(i) == '1'?tasi.push_back('0'):tasi.push_back('1');
  // }else{
  //   tasi.push_back(str.at(i));
  // }
  // j++;
