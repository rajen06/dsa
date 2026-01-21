#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    // decimal to binary
    // int rem, ans = 0, mul=1;

    // while(n > 0){
    //     rem = n % 2;
    //     n /=  2;
    //     ans += rem * mul;
    //     mul *= 10;
    // }

    // cout<<"The binary equivalent is: "<<ans<<endl;

    // binary to decimal

    // int rem, ans = 0, mul=1;
    // while(n > 0){
    //     rem = n % 10;
    //     n /=  10;
    //     ans += rem * mul;
    //     mul *= 2;
    // }
    // cout<<"The decimal equivalent is: "<<ans<<endl;

    // sum of digit
    
    // while(n>9){ 
    // int rem, ans = 0;
    // while(n > 0){
    //     rem = n % 10;
    //     n /=  10;
    //     ans += rem;
    // }
    // n = ans;
    // }
    // cout<<"The sum of digits is: "<<n<<endl;

    // leap year

    // if( (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0) ){
    //     cout<<n<<" is a leap year"<<endl;
    // } else {
    //     cout<<n<<" is not a leap year"<<endl;
    // }

    // reverse a number

    // int rem, ans = 0;
    // while(n != 0){
    //     rem = n % 10;
    //     n /=  10;
    //     ans = ans > INT_MAX/10 || ans < INT_MIN/10 ? 0 : ans * 10 + rem;
    // }
    // cout<<"The reverse is: "<<ans<<endl;

    // Power of 2
    // if(n > 0 && (n & (n - 1)) == 0 ){
    //     cout<<n<<" is a power of 2"<<endl;
    // } else {
    //     cout<<n<<" is not a power of 2"<<endl;
    // }

    // while(n != 1){
    //     if(n % 2 == 1)
    //         return 0;
    //     n /= 2;
    // }
    // return 1;


    // palindrome

    // int original = n;
    // int rem, reversed = 0;
    // while(n > 0){
    //     rem = n % 10;
    //     n /=  10;
    //     reversed = reversed > INT_MAX/10 || reversed < INT_MIN/10 ? 0 : reversed * 10 + rem;
    // }   
    // if(original == reversed){
    //     cout<<original<<" is a palindrome"<<endl;
    // } else {
    //     cout<<original<<" is not a palindrome"<<endl;
    // }


    // complement
    // int ans=0, rem, mul=1;
    // while(n){
    //     rem = n % 2;
    //     rem = rem ^ 1;
    //     n /= 2;
    //     ans = ans + rem * mul;
    //     mul *= 2;
    // }
    // cout<<"The complement is: "<<ans<<endl;

}