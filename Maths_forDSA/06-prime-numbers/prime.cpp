// Prime numbers have exactly 2 factors - 1 and itself 
// n=11 -> 1 and 11

// Method 1: Brute Force
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
        else{continue;}
    }
    if(count==2){ // 1 and number are factors
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}


// Method 2: Optimized
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
            cnt++;
			if((n/i)!=i){
				cnt++;
			}
		}
	}
	if(cnt==2){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}











