#include <iostream>

bool divCheck(uint number){
    bool isDiv = 1;
    for(uint i=2;i<=20;i++){
        if(number%i!=0){
            isDiv=0;
            break;
        }
    }
    return isDiv;
}


int main(int argc, const char *argv[]){
    uint64_t number=10;
    while(divCheck(number)==0){
        number++;
    }
    std::cout << number << std::endl;
    return 0;
}