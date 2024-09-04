// Important

// Pass by Value
#include <iostream>
#include <string>

using namespace std;

// Pass by value
void doSomething(string s) {
    s[0] = 't';
    cout << s << endl; // returns taj
}

int main() {
    string s = "raj";
    doSomething(s);
    cout << s << endl; // returns raj -> original input didnt change as a copy of it was sent to the function
    return 0;
}

// The original string `"raj"` is not modified in the `main` function because when passing by value, a copy of the string is created and passed to the `doSomething` function. 
// Changes made to this copy do not affect the original string.

// Pass by Reference
#include <iostream>
#include <string>

using namespace std;

// Pass by reference
void doSomething(string &s) {
    s[0] = 't';
    cout << s << endl;
}

int main() {
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}

// In this example, the original string `"raj"` is modified because passing by reference sends the address of the string to the `doSomething` function. 
// Any changes made to the string in the function will affect the original string.