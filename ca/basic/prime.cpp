#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    if(n < 2){
        cout<<n<<" is not a prime number."<<endl;
        return 0;
    } else {
        for(int i = 2; i*i <= n; i++){
            cout<<"Checking divisibility by "<<i<<endl;
            if(n % i == 0){
                cout<<n<<" is not a prime number."<<endl;
                return 0;
            }
        }
    }

    cout<<n<<" is a prime number."<<endl;
    
}
