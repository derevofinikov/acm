#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int mV = a[0];
    int mI = 0;
    int bI = -1, bJ = -1;
    int bN = 0, bD = 1;
    for (int j = 1; j < n; j++){
        if (a[j] > mV){
            long long b1 = a[j] * bD;
            long long b2 = mV   * bN;
            if (b1 > b2){
                bI = mI;
                bJ = j;
                bN = a[j];
                bD = mV;
            }
        }
        if (a[j] < mV){
            mV = a[j];
            mI = j;
        }
    }
    if (bI == -1){
        cout << "0 0";
    } else {
        cout << bI + 1 << " " << bJ + 1 << "\n";
    }
    return 0;
}