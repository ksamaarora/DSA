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

