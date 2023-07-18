#include <iostream>
#include <limits.h>

using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    long long ps[k];
    for (int i=0;i<k;i++){
        cin >> ps[i];
    }

    if (k==1){
        cout << "Yes" << endl;
        return;
    }

    int lastDiff=ps[1]-ps[0];
    for (int i=2;i<k;i++){
        if (!(ps[i]-ps[i-1]>=lastDiff)){
            cout << "No" << endl;
            return;
        }else{
            lastDiff=ps[i]-ps[i-1];
        }
    }

    long long max=ps[1]-ps[0];
    if ((n-k+1)*max>=ps[0]){
        cout << "Yes" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
