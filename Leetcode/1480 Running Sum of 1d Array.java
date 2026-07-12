class Solution {
    public int[] runningSum(int[] nums) {
        int[] arr=new int[nums.length];int x=0;
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<=i;j++)
            {
                x=x+nums[j];
            }
            arr[i]=x;
            x=0;
        }
        return arr;
    }
}