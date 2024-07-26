int countDigits(int n){
	// Write your code here.
	int count=0;
	while(n!=0){
        n=n/10;
		count++;
	}	
	return count;
}

// METHOD 2

#include<bits/stdc++.h>

int countDigits(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}

// Time complexity O(log base 10 (N))