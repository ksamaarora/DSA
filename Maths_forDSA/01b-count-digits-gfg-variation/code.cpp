class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int copy_N=N;
        int count=0;
        while(copy_N!=0){
            int lastdigit=copy_N%10;
            if(lastdigit!=0 && N%lastdigit==0) count++;
            copy_N=copy_N/10;
        }
        return count;
    }
};
