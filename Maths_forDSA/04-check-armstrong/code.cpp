#include <bits/stdc++.h>
bool checkArmstrong(int n){
	//Write your code here
	int armstrong = 0;
	int length = log10(n)+1;
	int duplicate=n;
	while(duplicate!=0){
		int lastDigit = duplicate%10;
		armstrong = armstrong + pow(lastDigit, length);
		duplicate=duplicate/10;
	}
	if(armstrong==n){
		return true;
	}
	else{
		return false;
	}
}
