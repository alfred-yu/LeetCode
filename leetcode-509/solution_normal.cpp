// 中规中矩计算方法，缺点是时间复杂度为2^n。

class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        else
            return fib(n - 1) + fib(n - 2);
    }
};
