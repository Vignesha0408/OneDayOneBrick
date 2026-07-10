class Solution {
    public double findMaxAverage(int[] nums, int k) {

        int maxSum = 0, s = 0, x = 0, y = k, a = 0;
        if (k >= nums.length) {
            for (int i = 0; i < nums.length; i++)
                a = a + nums[i];
            return (double) a / nums.length;
        }

        for (int i = 0; i < k; i++)
            s = s + nums[i];
        maxSum = s;

        while (true) {
            s = s - nums[x];
            s = s + nums[y];
            if (s > maxSum)
                maxSum = s;
            x = x + 1;
            y = y + 1;
            if (y == nums.length)
                break;
        }

        if (nums.length < k)
            return (double) maxSum / nums.length;
        else
            return (double) maxSum / k;
    }
}
