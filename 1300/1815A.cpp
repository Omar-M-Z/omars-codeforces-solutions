#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int dfa[n-1];
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (i >= 1){
            dfa[i - 1] = a[i] - a[i-1];
        }
    }
    if (n-1 >= 3){
        if ((n - 1) % 2 == 0){
            cout << "Yes" << endl;
            return;
        }
        long long s = 0;
        for (int j = 0;j < n-1;j+=2){
            s += dfa[j];
        }
        if (s >= 0){
            cout << "Yes" << endl;
            return;
        }
        cout << "No" << endl;
        return;
        //FIX THIS PART OF THE CODE
    }
    if ((n - 1) == 2){
        cout << "Yes" << endl;
        return;
    }
    if (dfa[0] >= 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}
int main(){
    int t;
    cin >> t;
    for (int t1=0;t1<t;t1++){
        solve();
    }
}
