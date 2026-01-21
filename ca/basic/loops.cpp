#include<iostream>

using namespace std;

int main(){
    // for(char i='a'; i<='z'; i++){
    //     cout<<i<<" ";
    // }

    // int n, i;
    // cout<<"Enter a number: ";
    // cin>>n;

    // for (int i = n; i >= 1; i--){
    //     cout<<i<<" ";
    // }

    //     for (int i = 1; i <= 100; i = i +3){
    //             cout<<i<<" ";
    //     }

    int n, pow;
    cout<<"Enter a number: ";
    cin>>n;


    // for (int i = 1; i <= 10; i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    // }

    cout<<"Enter the power: ";
    cin>>pow;
    int result = n; 
    for (int i = 1; i < pow; i++){
        result = result * n;
    }
    cout<<"The result is: "<<result<<endl;

}