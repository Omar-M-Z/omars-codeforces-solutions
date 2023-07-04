#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        int acc=0;
        for (int j=0;j<n;j++){
            if (a[j]>i){
                acc++;
            }
        }
        if (acc==i){
            cout << acc << endl;
            return;
        }
    }
    cout << -1 << endl;
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
