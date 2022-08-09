
// problem link: https://leetcode.com/problems/richest-customer-wealth/

class Solution {
    public int maximumWealth(int[][] accounts) {
        int wealthiest = 0;
        for (int i = 0; i < accounts.length; i++) {
            int wealth = countWealth(accounts[i]);

            if (wealth > wealthiest)
                wealthiest = wealth;
        }
        return wealthiest;
    }

    private int countWealth(int[] account) {
        int wealth = 0;
        for (int i = 0; i < account.length; i++) {
            wealth += account[i];
        }
        return wealth;
    }
}

class Main {

    public static void main(String[] args) {
        // write your code here
        Solution s = new Solution();
        int[][] accounts = { { 1, 5 },
                { 7, 3 },
                { 3, 5 } };

        System.out.println(s.maximumWealth(accounts));
    }
}
