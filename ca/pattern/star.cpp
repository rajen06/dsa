#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

     for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (j <= n - i ? "  " : "* ");
        }
        cout << endl;
    }
    cout << endl;

     for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            cout << (j <= n - i ? "  " : "* ");
        }
        cout << endl;
    }

    cout << endl;

    // pyramid pattern

    for (int i = 1; i <= n; i++) {
        // space
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // stars
        for (int j = 1; j <= (2*i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // reverse pyramid pattern

    for (int i = n; i >= 1; i--) {
        // space
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // stars
        for (int j = 1; j <= (2*i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;


    for (int row = n; row >= 1; row--) {
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (2*n)-(2*row); col++) {
            cout << "  ";
        }
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++) {
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (2*n)-(2*row); col++) {
            cout << "  ";
        }
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // Butterfly pattern

    
    for (int row = 1; row <= n; row++) {
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (2*n)-(2*row); col++) {
            cout << "  ";
        }
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = n-1; row >= 1; row--) {
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        // space
        for (int col = 1; col <= (2*n)-(2*row); col++) {
            cout << "  ";
        }
        // stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Diamond Pattern

    for (int row = 1; row <= n; row++) {
        // Space
        for (int col = 1; col <= n-row; col++) {
            cout << " ";
        }
        // Stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = n; row >= 1; row--) {
        // Space
        for (int col = 1; col <= n-row; col++) {
            cout << " ";
        }
        // Stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

}