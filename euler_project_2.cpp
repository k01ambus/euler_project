#include <iostream>
using namespace std;

class Fibonacci{
private:
    int limit;
    int sum;
public:
    Fibonacci(int limit=4000000){
        Fibonacci::limit=limit;
    }
    void SumOfEvens(){
        sum=0;
        int fCur=2, fPrev=1, temp;
        while(fCur<limit){
            if(fCur%2==0) sum+=fCur;
            temp=fCur+fPrev;
            fPrev=fCur;
            fCur=temp;
        }

    }
    int GetSum(){
        return sum;
    }

};

int main(){
    int limit;
    cout << "Input limit: " << endl;
    cin >> limit;
    cout << endl;
    Fibonacci task2(limit);
    task2.SumOfEvens();
    cout <<"Sum of even Fibonacci numbers till "<< limit<< ": " <<  task2.GetSum() << endl;

    return 0;
}