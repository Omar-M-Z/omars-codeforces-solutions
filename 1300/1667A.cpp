#include <iostream>
#include <cmath>

using namespace std;
void solve(){
    int n;
    cin >> n;
    long long a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    long long minMoves=9223372036854775807;
    for (int i=0;i<n;i++){
        long long currentMinMoves=0;
        long long last=0;
        for (int j=i+1;j<n;j++){
            currentMinMoves+=abs(floor(last/a[j]))+1;
            last=(floor(last/a[j])+1)*a[j];
        }
        last=0;
        for (int j=i-1;j>=0;j--){
            currentMinMoves+=abs(ceil(last/a[j])-1);
            last=ceil((last/a[j])-1)*a[j];
        }
        minMoves=min(minMoves, currentMinMoves);
    }
    cout << minMoves << endl;
}

int main(){
    solve();
    /*
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }*/
}
