#include <iostream>
 
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int l=0, r=n-1;
    int min=1,max=n;
    while (l<=r){
        if (a[l]==max) {
            l++;
            max--;
        }
        else if (a[l]==min){
            l++;
            min++;
        }
        else if (a[r]==max){
            r--;
            max--;
        } else if (a[r]==min){
            r--;
            min++;
        }
        else{
            cout << l+1 << " " << r+1 << endl;
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
