class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        int limit = sqrt(n);

        for (int m = 2; m <= limit; m++) {
            for (int k = 1; k < m; k++) {

                // m and k must be coprime and of opposite parity
                if (((m - k) & 1) == 0) continue;
                if (__gcd(m, k) != 1) continue;

                int a = m * m - k * k;
                int b = 2 * m * k;
                int c = m * m + k * k;

                if (c > n) break;

                // Now generate multiples of primitive triple
                int mul = 1;
                while (mul * c <= n) {
                    int A = mul * a;
                    int B = mul * b;
                    int C = mul * c;

                    if (A <= n && B <= n && C <= n) {
                        if (A == B)
                            count += 1;   // only (A, A, C)
                        else
                            count += 2;   // (A, B, C) and (B, A, C)
                    }

                    mul++;
                }
            }
        }

        return count;
    }
};