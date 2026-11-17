#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ll n, m;                       
    cin >> n >> m;
    vector<int> isprime(m + 1, 1);
    isprime[0] = 0;
    isprime[1] = 0;
    for (ll i = 2; i <= m; ++i) {
        if (isprime[i] == 1) {
            for (ll j = 2 * i; j <= m; j += i) {
                isprime[j] = 0;   
            }
        }
    }
    bool found = false;
    for (ll x = n; x <= m; ++x) {
        if (isprime[x] == 1) {     
            cout << x << endl;
            found = true;
        }
    }
    if (found == false) {
        cout << "Absent" << endl;
    }
    return 0;
}
