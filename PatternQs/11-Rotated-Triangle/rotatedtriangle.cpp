// METHOD 1 (Striver method)





// METHOD 2
#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    // Print the upper part of the rotated triangle
    for(int j = 0; j < n; j++) {
        for(int i = 0; i <= j; i++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the lower part of the rotated triangle
    for(int j = n - 1; j > 0; j--) {
        for(int i = 0; i < j; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    nStarTriangle(n);
    return 0;
}
