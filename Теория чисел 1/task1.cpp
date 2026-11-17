#include <iostream>
using namespace std;
using ll = long long;

bool isprime (ll n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i < n; i += 2) {
        if (n % i == 0){
            return false;
        } else {
            return true;
        }
    }
}

int main () {
    ll n;
    cin >> n;
    if (isprime(n)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
