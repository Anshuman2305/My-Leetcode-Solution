class Solution {
public:
    int reverse(int x) {
        int rev_num = 0;
    while (x != 0)
    {
        int mod=x%10;
        if ((rev_num>214748364) || (rev_num<-214748364)) {
            return 0;
        }
        rev_num = 10*rev_num + mod;
        x = x/10;
    }
        
        
        return rev_num;
    }
};