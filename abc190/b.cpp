#include <iostream>

int main(){
    int N,S,D;
    std::cin >> N >> S >> D;

    int X,Y;
    for(int i = 0;i < N; i++){
        std::cin >> X >> Y;
        if(X < S && Y > D){
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}