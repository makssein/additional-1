#include <iostream>

int main(){
    int Q1, P1, Q2, P2, A, sMin = 10000000, s = 10000000;
    std::cin >> Q1 >> P1 >> Q2 >> P2 >> A;
    for (int i = 0; i < 1000; i++){
        for (int j = 0; j < 1000; j++){
            if ((i * Q1 + j * Q2) >= A){
                s = i * P1 + j * P2;
            }
            if (s < sMin){
                sMin=s;
            }
        }
    }
    std::cout << sMin << std::endl;
}