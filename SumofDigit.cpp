#include<iostream>
using namespace std;

//function 
int sumOfDigits(int num){
    int digitSum = 0;
    while(num > 0){
        int LastDigits = num % 10;
        num /= 10;

        digitSum += LastDigits;
    }
    return  digitSum;
}
int main(){
    int n=543;
    cout << sumOfDigits(n);

    return 0;
}