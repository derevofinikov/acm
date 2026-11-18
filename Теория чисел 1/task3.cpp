#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll k = 1;
    for (int i = 2; i <= 1000 && i*i <= n; ++i){
        if (n % i != 0) continue;
        ll p = 1;
        int c = 0;
        while (n % i == 0) {
            c += 1;
            n /= i;
        }
        k *= (c + 1);
    }
    if (n > 1) {
        k *= 2;
    }
    cout << k << endl;
    return 0;
}
