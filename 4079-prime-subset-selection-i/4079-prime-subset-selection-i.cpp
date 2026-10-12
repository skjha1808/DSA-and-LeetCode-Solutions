class Solution {
    vector<int> generatePrimes(int n) {
        vector<bool> isPrime(n + 1, true);

        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> primes;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        return primes;
    }

public:
    vector<int> maxPrimes(int n, int s) {
        if (n < 2 || s < 2) {
            return {};
        }
        vector<int> primes = generatePrimes(n);
        vector<int> result;
        int sum = 0;
        for (int prime : primes) {
            if (sum + prime <= s) {
                result.push_back(prime);
                sum += prime;
            } else
                break;
        }
        
        return result;
    }
};