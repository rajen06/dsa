#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;
    int fact =1;

    if(n <= 0){
        cout<<"The number is not a natural number."<<endl;
    } else {
        for(int i = 1; i <= n; i++){
            fact *= i;;
        }
    }
    cout<<"The factorial of "<<n<<" is: "<<fact<<endl;

}