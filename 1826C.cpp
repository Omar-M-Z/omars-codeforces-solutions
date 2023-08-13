#include <iostream>
#include <cmath>
 
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    if (n>1 && m>=n){
        cout << "No" << endl;
        return;
    }
    for (int d=min(m, int(sqrt(n)));d>=1;d--){
        if (d==1){
            cout << "Yes" << endl;
            return;
        }
        if(n%d==0){
            cout << "No" << endl;
            return;
        }
    }
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
