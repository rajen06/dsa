#include<iostream>
using namespace std;
int countdigits(int num){
    int count = 0;
    while(num > 0){
        count++;
        num /= 10;
    }
    return count;
}

bool armstrong(int num, int digit){
    int sum = 0;
    int temp = num;
    while(temp > 0){
        int rem = temp % 10;
        sum += pow(rem, digit);
        temp /= 10;
    }

    return sum == num;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int digit = countdigits(num);
    cout<<"Number of digits in "<<num<<" is "<<digit<<endl;

    cout<<armstrong(num, digit)<<endl;

}