class Solution {
public:
    int countSetBits(int n){
        int count=0;
        while(n){
            n&=(n-1);
            count++;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int track=0;
        for(int i=left; i<=right; i++){
            int set= countSetBits(i);
            if(set==2 or set==3 or set==5 or set==7 or set==11 or set==13 or set==17 or set==19){
                track++;
            }
        }
        return track;
    }
};