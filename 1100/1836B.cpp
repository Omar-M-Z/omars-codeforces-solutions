#include <iostream>
#include <cmath>

using namespace std;

void solve(){
    long long n, k, g;
    cin >> n >> k >> g;
    long long remainingCoins=k*g;
    long long coinsSaved=0;

    long long x=min(n-1, (k*g)/((g-1)/2));
    if (g==2){x=0;}
    coinsSaved+=x*((g-1)/2);
    remainingCoins-=coinsSaved;
    if (remainingCoins < ceil((double)g/2.0)){
        coinsSaved+=remainingCoins;
    } else{
        int r=remainingCoins%g;
        if (r >= ceil((double)g/2.0)){
            coinsSaved -= (g-remainingCoins%g);
        } else{
            coinsSaved += remainingCoins%g;
        }
    }
    cout << coinsSaved << endl;
}

int main(){
    int t;
    std::cin >> t;

    for (int t1=0; t1<t; t1++){
        solve();
    }
}
