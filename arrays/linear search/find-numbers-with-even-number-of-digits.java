
// problem link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits

class Solution {
    public int findNumbers(int[] nums) {
        int evenNumberDigits = 0;
        for (int i = 0; i < nums.length; i++) {
            int digitsInNumber = countDigits(nums[i]);

            if (isEven(digitsInNumber))
                evenNumberDigits++;
        }

        return evenNumberDigits;
    }

    private int countDigits(int num) {
        return (int) (Math.log10(num) + 1);
    }

    private boolean isEven(int num) {
        return num % 2 == 0;
    };
}

class Main {

    public static void main(String[] args) {
        // write your code here
        Solution s = new Solution();
        int[] nums = { 555, 901, 482, 1771 };
        System.out.println(s.findNumbers(nums));

    }
}