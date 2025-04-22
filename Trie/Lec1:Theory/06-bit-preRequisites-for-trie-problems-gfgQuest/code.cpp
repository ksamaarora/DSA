class Solution {
  public:
    int XOR(int n, int m) {
        // code here
        return n^m;
    }
    int check(int a, int b) {
        // code here
        int mask=1<<(a-1);
        if((b&mask)!=0) return 1;
        else return 0;
    }
    int setBit(int c, int d) {
        // code here
        int mask=1<<c;
        return d|mask;
    }
};
