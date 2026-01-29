#include <iostream>
using namespace std;

// function to chcek prime
bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
};

// function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
};

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << isPrime(a) << endl;
    cout << factorial(a) << endl;
    cout << isPrime(b) << endl;
    cout << factorial(b) << endl;
    cout << isPrime(b - a) << endl;
    cout << factorial(b - a) << endl;
}