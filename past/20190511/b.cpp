#include <iostream>

int main(){
  int R_Ball_num = 0;
  int G_Ball_num = 0;
  int B_Ball_num = 0;

  int r_Box_num = 0;
  int g_Box_num = 0;
  int b_Box_num = 0;

  int Get_Ball = 0;

  int count = 0;

  int sum = 0;


  // int min_Ball = 0;
  // int max_Ball = 0;
  // int med_Ball = 0;

  std::cin >> R_Ball_num >> G_Ball_num >> B_Ball_num >> Get_Ball;
  // //最小のぼーるの数を取得
  // min_Ball = std::min(R_Ball_num, std::min(G_Ball_num, B_Ball_num));
  // max_Ball = std::max(R_Ball_num, std::max(G_Ball_num, B_Ball_num));

  //赤ボールを基準にする
  for ( int i = 0; i <= Get_Ball; i++ )
  {
    // std::cout << std::endl;

    sum = 0;


    sum = (R_Ball_num * i);
    if(sum == Get_Ball)
    {
      std::cout << "赤" <<"sum : "<< sum  << std::endl;

      count++;
      continue;
    }



    sum += G_Ball_num;
    if(sum == Get_Ball)
    {
      std::cout << "緑" <<"sum : "<< sum  << std::endl;

      count++;
      continue;
    }
    if(sum + B_Ball_num > Get_Ball)
      sum -= G_Ball_num;
      std::cout << i << "回目"<< "sum : " << sum <<std::endl;



    sum += B_Ball_num;
    if(sum == Get_Ball)
    {
      std::cout << "青" <<"sum : "<< sum  << std::endl;

      count++;
      continue;
    }

  }
  std::cout << count << std::endl;






}
