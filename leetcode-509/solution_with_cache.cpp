// 为避免递归过程中重复计算，这里采用map缓存已计算出的数值。

class Solution {
private:
    map<int, int> caches;
public:
    int fib(int n) {
        if (n <= 1)
            return n;

        if (caches.count(n))
            return caches[n];
        else
        {
            caches[n] = fib(n - 1) + fib(n - 2);
            return caches[n];
        }
    }
};
