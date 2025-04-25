#include <bits/stdc++.h>
bool checkArmstrong(int n){
	//Write your code here
	int armstrong = 0;
	int total_digits = log10(n)+1; // O(1)
	int duplicate=n;
	while(duplicate!=0){ // O(log10(n))=O(d) as it would loop for number of digits 
		int lastDigit = duplicate%10;
		armstrong = armstrong + pow(lastDigit, total_digits); // O(log(p)) where p is exponent, here p is d
		duplicate=duplicate/10;
	}
	if(armstrong==n){
		return true;
	}
	else{
		return false;
	}
}

// TC:O(d*log(d))
// SC:O(1)
