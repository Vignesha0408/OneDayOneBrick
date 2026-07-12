class Solution {
    public boolean isPalindrome(int x) {
        
        if(x<0)
        
            return false;
        int z=0;
        int x1=x;
        while(x!=0)
        {
            z=z*10+ (x%10);
            x=x/10;
        }
        if(x1==z) 
        return true;
        return false;
    }
}