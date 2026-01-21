#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cout<<"Enter a natural number: ";
    cin>>n;

    if(n > 0){
        for(int i = 1; i <= n; i++){
            sum += i;
        }
        cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;

        cout<< n * (n + 1) / 2 <<" (using formula)"<<endl;
    } else {
        cout<<n<<" is not a natural number."<<endl;
    }

    
}