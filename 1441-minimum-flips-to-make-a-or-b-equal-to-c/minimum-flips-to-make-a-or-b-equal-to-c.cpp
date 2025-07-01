class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res=0;
        int x= a|b;
        int duplicate=c;
        while(duplicate>0){
            int l= x&1;
            int r= duplicate&1;
            if(l==0 and r==1) res++;
            x>>=1;
            duplicate>>=1;
        }
        x=a|b;
        int y= a^b;
        while(x){
            int l=x&1;
            int q=y&1;
            int r=c&1;
            if((l==1 and r==0) and q==1)res++;
            else if((l==1 and r==0) and q==0)res+=2;
            x>>=1;
            y>>=1;
            c>>=1;
        }
        return res;
    }
};