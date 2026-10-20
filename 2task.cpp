#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector <ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int s = k + 1;
    ll maxi = -1;
    int bl = 0;
    int br = s;
    int cle = 0;
    for (int j = s; j < n; ++j){
        if (a[j - s] > a[cle]){
            cle = j - s;
        }
        ll cs = a[cle] + a[j];
        if (cs > maxi) {
            maxi = cs;
            bl = cle;
            br = j;
        }
    }
    cout << bl + 1 << " " << br + 1 << endl;
    return 0;
}


