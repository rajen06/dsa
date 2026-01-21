#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        char ch = 'a' + i - 1;
        for (int j = 1; j <= n; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << char('a' + j - 1) << " ";
        }
        cout << endl;
    }

    cout << endl;

     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('a' + i - 1) << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        // space
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // numbers
        for (int j = 1; j <= i; j++) {
            cout <<  char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    
}