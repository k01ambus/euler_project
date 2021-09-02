#include <iostream>


int main(int argc, const char *argv[]){
    uint64_t number=100;
    uint64_t result=0;
    for(int i=1; i<=number; i++){
        for(int j=i+1; j<=number; j++){
            result+=i*j;
        }
    }

    std::cout << 2*result << std::endl;
    return 0;
}