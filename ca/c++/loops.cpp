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

    // int n, pow;
    // cout<<"Enter a number: ";
    // cin>>n;


    // for (int i = 1; i <= 10; i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    // }

    // cout<<"Enter the power: ";
    // cin>>pow;
    // int result = n; 
    // for (int i = 1; i < pow; i++){
    //     result = result * n;
    // }
    // cout<<"The result is: "<<result<<endl;


    // while loop

    // int i = 1, n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // while(i <= 10){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    //     i++;    
    // } 
    // while(i <= n){
    //     if(n % i == 0){
    //         cout<<i<<" ";
    //     }
    //     i++;    
    // }   

    // do while loop

    // int i = 1, n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // do{
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    //     i++;    
    // } while(i <= 10);

    // do {
    //     if(i == 4)
    //         break;
    //     if(n % i == 0){
    //         cout<<i<<" ";
    //     }
    //     i++;
        
    // } while (i <= n);

    // for (int i = 1; i <= 5; i++) {
    //     if(i == 3)
    //         continue;
    //     cout<<i<<" ";
    // }

    // case statement 

    int n;
    cout<<"Enter a number between 1 to 7: ";
    cin>>n;
    switch (n){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
    }
}