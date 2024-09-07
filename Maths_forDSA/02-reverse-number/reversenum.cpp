class Solution{
	public:
	int reverse(int x){
		int revnum=0;
		while(x!=0){
			int lastdigit=x%10;
			if(revnum> INT_MAX /10 || revnum==INT_MAX/10 && lastdigit>7){return 0;} // positive overflow
			else if(revnum<INT_MIN/10 || revnum==INT_MIN/10 && lastdigit<-8){return 0;} // negative overflow
			revnum=(revnum*10) + lastdigit;
			x=x/10;
		}
		return revnum;
	}
};