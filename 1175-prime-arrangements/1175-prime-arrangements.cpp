#include <iostream>
using namespace std;
const int MOD = 1000000007;
class Solution {
public:
    bool isPrime(int num) {
        if (num < 2) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }

    long long factorial(int n) {
        long long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact = (fact * i) % MOD; 
        }
        return fact;
    }

    int numPrimeArrangements(int n) {
        int c = 0;
        for (int i = 1; i <= n; i++) {
            if (isPrime(i)) c++;  
        }
        
        return (factorial(c) * factorial(n - c)) % MOD; 
    }
};

