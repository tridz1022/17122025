#include <bits/stdc++.h>
using namespace std;

vector <int> sieve(int n) {
    vector <int> v;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) v.push_back(n);
    return v;
}

int main() {
    int n; cin >> n;
    while (n--) {
        int a, b; cin >> a >> b;
        if (__gcd(a, b) > 1){
            cout << 0 << endl;
            continue;
        }

        vector <int> v = sieve(a);
        int res = INT_MAX;
        for (int x : v) 
            res = min(res, (b % x == 0) ? 0 : (x - b % x));
        cout << res << endl;
    }
    return 0;
}
