#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j * j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j * j * j << " ";
        }
        cout << endl;
    }

    cout << endl;

   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout <<  (i-1)*5 + j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout <<  j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout <<  i << " ";
        }
        cout << endl;
    }

    cout << endl;

     for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout <<  j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-(i-1); j++) {
            cout <<  j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= n-(i-1); j--) {
            cout <<  j << " ";
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
            cout <<  i << " ";
        }
        // for (int j = 1; j <= n; j++) {
        //     if (j <= n - i) {
        //         cout << "  ";
        //     } else {
        //         cout << i << " ";
        //     }
        // }

        // for (int j = 1; j <= n; j++) {
        //     cout << (j <= n - i ? "  " : to_string(i) + " ");
        // }
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
            cout <<  j << " ";
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
        for (int j = i; j >= 1; j--) {
            cout <<  j << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int row = 1; row <= n; row++) {
        // // space
        // for (int j = 1; j <= n-row; j++) {
        //     cout << "  ";
        // }
        // // numbers
        // for (int j = 1; j <= (2*i - 1); j++) {
        //     if(j<= i){
        //         cout <<  j << " ";
        //     } else {
        //         cout <<  (2*i - j) << " ";
        //     }
            
        // }

        // space
        for (int col = 1; col <= n-row; col++) {
            cout << "  ";
        }
        // numbers
        for (int col = 1; col <= row; col++) {
            cout <<  col << " ";
        }
        for (int col = row-1; col >= 1; col--) {
            cout <<  col << " ";
        }
        cout << endl;
    }
}