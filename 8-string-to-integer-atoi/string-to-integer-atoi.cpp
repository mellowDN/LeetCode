class Solution {
public:
    int myAtoi(string s) {
        long long int num=0;
        bool neg=false;
        int i=0;
        while(s[i]==' '){
            i++;
        }
        int j=i;
        if(s[j]=='-'){
            neg= true;
            i++;
        }
        else if (s[j]=='+'){
            neg== false;
            i++;
        }
        for(i; i<s.length(); i++){
            if(s[i]<48 || s[i]>57){
                break;
            }
            int temp= s[i]- '0';
            num= num*10 + temp;
            if(num>INT_MAX){
                if(neg){
                    num=1ll*INT_MAX+1;
                }
                else{
                    num=INT_MAX;
                }
                break;
            }
        }
        if(neg){
            return (num)*(-1);
        }
        return num;
    }
};