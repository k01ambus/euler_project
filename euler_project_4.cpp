#include <iostream>
#include <cmath>

bool paliCheck(int number){
    bool isPali=1;
    int digitsCount=1;
    for(int i=1;i<number;i*=10){
        if(number>=10*i) digitsCount++;
    }
    int* digits= new int[digitsCount];
    int temp;
    for(int i=0;i<digitsCount;i++){
        if(temp=number/pow(10,digitsCount-1-i)){
            digits[digitsCount-1-i]=temp;
            number=number-temp*pow(10,digitsCount-1-i);
        }
        else digits[digitsCount-1-i]=temp;
    }

    int leftDigit=0, rightDigit=0;
    for(int i=0;i<=(digitsCount-1)/2;i++){
        if(digits[i]!=digits[digitsCount-1-i]) isPali=0;
    }
    return isPali;
}

int main(int argc, const char *argv[]){
    int maxPali=0;
    for(int i=100,number=0;i<1000;i++){
        for(int j=100;j<1000;j++){
            number=i*j;
            if(paliCheck(number) && number>maxPali) maxPali=number;  
        }
      
    }
    std::cout << maxPali;
    return 0;
}