#include<iostream>
using namespace std;

void printFactorialRecursive(int n, int fact, int i) {
    if(fact > n) {
        return; 
    }
    cout << fact << " ";
    printFactorialRecursive(n, fact * (i + 1), i + 1);
}

int main() {
    int n;
    cin >> n;
    
    printFactorialRecursive(n, 1, 1); 
    return 0;
}
