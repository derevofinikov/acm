#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    ll N,M;
    cin >> N;
    vector <ll> NA;
    for (int i = 0; i < N; i+=1){
        cin >> NA[i];
    }
    cin >> M;
    vector <ll> MQ;
    for (int i = 0; i < M; i+= 1) MQ[i];
    sort(NA.begin(), NA.end());
    for (int i = 0; i < M; ++i){
        int l = 0;
        int r = N;
        while (l < r){
            int mid = (l+r)/2;
            if (NA[mid] <= MQ[i]){
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        cout << l << " ";
    }
    cout << endl;
    return 0;
}
