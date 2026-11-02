#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long N, M;
    cin >> N;
    vector <long long> NA;
    for (int i = 0; i < N; i += 1){
        long long x;
        cin >> x;
        NA.push_back(x);
    }
    cin >> M;
    vector <long long> MQ;
    for (int j = 0; j < M; j += 1){
        long long x;
        cin >> x;
        MQ.push_back(x);
    }
    sort (NA.begin(), NA.end());
    for (int h = 0; h < M; h += 1){
        int l = 0;
        int r = N;
        while (l < r){
            int mid = (l+r)/2;
            if (NA[mid] < MQ[h]){
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
