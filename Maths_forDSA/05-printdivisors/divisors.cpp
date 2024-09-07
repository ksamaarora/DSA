// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

void printDivisors(int n) {
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
    cout<<endl;
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}

// METHOD 2 - MATHEMATICAL OBSERVATION
// IMPORTANT - Refer notes for explanation
#include <iostream>

using namespace std;

// Write your printDivisors function here
void printDivisors(int n) {
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ls.push_back(i);
            if ((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls) cout << it << " ";
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}

