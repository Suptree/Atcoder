#include <iostream>
#include <vector>
int main(){
    int A,B,C;
    std::cin >> A >> B >> C;

    if(C == 0){//先手はA
        if(A > B){
            std::cout << "Takahashi" << std::endl;
            return 0;
        }else{
            std::cout << "Aoki" << std::endl;
        }
    }else{
        if(A < B){
            std::cout << "Aoki" << std::endl;
            return 0;
        }else{
            std::cout << "Takahashi" << std::endl;
        }
    }

    return 0;
    
}