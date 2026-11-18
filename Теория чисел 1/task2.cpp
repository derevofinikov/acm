#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    bool first = true;
    for (ll d = 2; d * d <= n; ++d){
        while (n % d == 0){
            if (first == true) {
                cout << d;
                first = false;
            } else {
                cout << '*' << d;
            }
            n /= d;
        }
    }

    if(n > 1){
        if (first == false){
            cout << '*';
        }
        cout << n;
    }
}
