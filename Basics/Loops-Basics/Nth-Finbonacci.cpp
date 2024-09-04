#include<iostream>
using namespace std;

int funcFibonacci(int n) {
    if(n == 1 || n == 2) return 1;
    int a = 1, b = 1, fib;
    for(int i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    int input;
    cin >> input;
    int result = funcFibonacci(input);
    cout << "The " << input << "th Fibonacci number is " << result << endl;
    return 0;
}
