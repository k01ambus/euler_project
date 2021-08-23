#include <iostream>
#include <cmath>

class EulerTask{
    private:
    long long int number;
    long long int maxPrimeFactor=0;
    public:
    EulerTask(long long int number){
        EulerTask::number=number;
    }
    long long int GetMaxPrimeFactor(){
        if(maxPrimeFactor)  return maxPrimeFactor;
        long long int currPrimeFactor=2;
        long long int temp=number;
        while(temp>currPrimeFactor)
        {
            if(temp%currPrimeFactor==0) temp/=currPrimeFactor;
            else currPrimeFactor++;
        }
        return maxPrimeFactor=currPrimeFactor;            

    }
};

long long int atolli(const char* str){
    
    long long int result=0;
    for(int i=0;str[i]!='\0';i++){
        result=10*result+(str[i]-'0');
    }
    return result;
}

int main(int argc, const char *argv[]){
    long long int number = atolli(argv[1]);
    EulerTask task3(number);
    std::cout << task3.GetMaxPrimeFactor()<< "\n";
}