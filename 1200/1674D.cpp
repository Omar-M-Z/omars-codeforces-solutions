#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int i=n-1;
    int lMin;
    while (i>=0){
        if (i>=1){
            int c=max(a[i], a[i-1]);
            if (c<=lMin || i==n-1){
                lMin=min(a[i], a[i-1]);
                i-=2;
            }else{
                cout << "NO" << endl;
                return;
            }
        }
        else{
            if (a[i]<=lMin || i==n-1){
                cout << "YES" << endl;
                return;
            } else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
} 
