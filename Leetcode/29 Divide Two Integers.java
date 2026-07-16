class Solution {
    public int divide(int dividend, int divisor) {
//extream end case
if(dividend == Integer.MIN_VALUE && divisor==-1)
    return Integer.MAX_VALUE;

        long neg=0,ans=0;
        if(dividend<0 && divisor<0)
            neg=2;
        else if(dividend<0 || divisor<0)
            neg = 1;
        else neg = 0;
        long dividends=Math.abs((long) dividend);
        long divisors=Math.abs((long) divisor);

        if(divisors==1)
        {
            ans=dividends;
             if(neg==2 || neg==0)
                return (int)ans;
            else 
                return (int)ans*-1;
        }


        if(dividends==divisors)
            {
                ans=1;
                if(neg==2 || neg==0)
                    return (int)ans;
                else 
                    return (int)ans*-1;
            }

        while(divisors<=dividends)
        {
            ans=ans+1;
            dividends=dividends-divisors;
        }
        







        if(neg==2 || neg==0)
            return (int)ans;
        else 
            return (int)ans*-1;
    }
}
