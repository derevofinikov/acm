#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ll n,x,y;
    cin >> n >> x >> y;
    ll f = min(x,y);
    ll m = max(x,y);
    ll l = 0;
    ll maxi = m*n;
    while (l < maxi){
        ll mid = (l+maxi) / 2;
        ll k = 0;
        if (mid >= f){
            k = 1 + (mid - f)/f + (mid - f)/m;
        } 
        if (k >= n){
            maxi = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << l << endl;
    return 0;
}
