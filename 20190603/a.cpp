#include <iostream>
#include <string>
int main()
{
  //ますの数
  int N = 0;
  //すぬけの今の位置
  int A = 0;
  //ふぬけの今の位置
  int B = 0;
  //すぬけの到達の位置
  int C = 0;
  //ふぬけの到達の位置
  int D = 0;
  //マスの中身
  std::string S;

  //すorふの到達地点を代入する
  int far = 0;
  int near = 0;
  far = std::max(C,D);
  near = std::min(C,D);

  std::cin >> N >> A >> B >> C >> D >> S;

  //行きたい地点までに岩が２つ続いていないかの判定
  bool rocktwo = false;
  for(int i = 0; i < near; i++)
  {

    if( S[i] == '#' && S[i+1] == '#' )
      rocktwo = true;

  }
  //rocktwoのときNoを出力して終わり
  if( rocktwo )
  {
    std::cout << "No" << std::endl;
    return 0;
  }

  for(int i = 0; i < near; i++)
  {
    
  }



  return 0;

}
