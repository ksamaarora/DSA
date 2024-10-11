// Brute force method 
// TC: O(x*y) in worst case when both numbers are prime e.g. 3 and 7 lc = 3*7 = 21
// SC: O(1)
#include<iostream>
using namespace std;

int lcm_bruteforce(int x, int y) {
    int lcm = max(x, y); 
    while(true){ // there would be an lcm for sure so loop indefintiely
        if(lcm%x==0 && lcm%y==0){
            return lcm;
        }
        lcm++;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    int lcm_val = lcm_bruteforce(x, y);
    cout << "LCM (Brute Force): " << lcm_val << endl;
    return 0;
}

// Optimised method 
// TC:O(log phi (min(a,b))) where phi would depend as it may be a or b as both of them may get divided in any case
// SC:O(1)
#include<iostream>
using namespace std;
int gcd(int a, int b) {
    while(a>0 && b>0){
		if(a>b) a=a%b;
		else if(b>=a) b=b%a;
	}
	if(a==0) return b;
	else if (b==0) return a;
}

int lcm(int a, int b) {
    int gcd_value = gcd(a,b);
    return (a * b) / gcd_value;  // LCM(a, b) = (a * b) / GCD(a, b)
}

int main() {
    int x, y;
    cin >> x >> y;
    int lcm_val = lcm(x, y);
    cout << "LCM (Optimized): " << lcm_val << endl;
    return 0;
}
