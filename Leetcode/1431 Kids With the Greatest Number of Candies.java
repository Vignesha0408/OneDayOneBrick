class Solution {

    int findmax(int[] candies)
    {
        int max=candies[0];
        for(int i=0;i<candies.length;i++)
        if(max<=candies[i])
            max=candies[i];
        return max;
    }
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max=findmax(candies);
        List<Boolean> a = new ArrayList<>();
        for(int i=0;i<candies.length;i++)
            {
                if(candies[i]+extraCandies>=max)
                    a.add(true);
                else
                    a.add(false);
            
            }
            return a;
        
    }

}