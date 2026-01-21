#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    if(n <= 0){
        cout<<"The number is not a natural number."<<endl;
        return 0;
    }

    int a = 0, b = 1;
    cout<<"Fibonacci series up to "<<n<<" terms is: "<<endl;
    for(int i = 1; i <= n; i++){
        cout<<a<<" ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout<<endl;
}
    