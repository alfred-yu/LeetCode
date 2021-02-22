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
