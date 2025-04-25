// Method 1 Brute Force Approach
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    int gcd;
    for(int i=1; i<=min(x,y); i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
        else{continue;}
    }
    cout<<gcd;
    return 0;
}
// TC = O(min(x,y))


// Method 2
// Instead travers in reverse order and when both modulo condition == 0 then print i i.e. gcd and break 
for(int i=min(x,y); i>=1; i--){
    if(x%i==0 && y%1==0){
        gcd=i;
    }
    else{continue;}
}
// Better time complexity


// Method 3 - Using Eucledian Algorithm
// Refer to notes last 2 pgs for explaination - IMP
int gcd(int a,int b)
{
	//Write your code here
	while(a>0 && b>0){
		if(a>b) a=a%b;
		else if(b>=a) b=b%a;
	}
	if(a==0) return b;
	else if (b==0) return a;
}
