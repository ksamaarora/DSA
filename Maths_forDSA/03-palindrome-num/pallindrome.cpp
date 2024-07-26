bool palindrome(int n)
{
    // Write your code here
    int revNum=0;
    int num=n;
    while(num!=0){
        int lastDigit=num%10;
        revNum=(revNum*10)+lastDigit;
        num=num/10;
    }
    if(n==revNum){
        return true;
    }
    else{
        return false;
    }
}