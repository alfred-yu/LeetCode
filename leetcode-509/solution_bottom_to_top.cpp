// 常规解法中是自顶向下的，此时会存在重复计算的情况，时间
// 复杂度为2^n, 这里采用自底向上的方法。

class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;

        int n0 = 0;
        int n1 = 1;

        int curr;
        // 0 1 1 2 3 5
        for (int i = 2; i <= n; i++)
        {
            curr = n0 + n1;
            n0 = n1;
            n1 = curr;
        }

        return curr;
    }
};
