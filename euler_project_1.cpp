#include <iostream>

class EulerTask{
private:
    int maxNumber;
    int result;
public:
    EulerTask(int maxNumber){
        result=0;
        EulerTask::maxNumber=maxNumber;
    }
    
    void EulerTaskResult(){
        for(int i=1; i<maxNumber; i++){
            if(((i%3==0)||(i%5==0)) && (i<maxNumber))  
            result+=i;
        }
        std::cout << "Sum of %3 and %5 numbers till " << maxNumber << ": " << result << std::endl;        
    }


};

int main(){
    int maxNumber;
    std::cout << "Input max number: ";
    std::cin >> maxNumber;
    std::cout << std::endl;

    EulerTask task1(maxNumber);
    task1.EulerTaskResult();
    return 0;
}