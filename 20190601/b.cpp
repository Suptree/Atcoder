#include <iostream>
#include <string>
int main()
{
  std::string S;
int count = 0;
  std::cin >> S;

  for(int i = 0; i < S.length(); i++)
  {
    if( S[i] == 'o' )
    {
      count++;
    }
  }
  if(  ( 15 - S.length() ) + count >= 8 )
  std::cout << "YES" <<std::endl;
  else
  std::cout << "NO" <<std::endl;

  return 0;
}
