#include <iostream>
 
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int g=-1;
    for (int i=n-2;0<=i;i--){
        if (a[i]>a[i+1] && a[i]>g){
            g=a[i];
        }
    }
    if (g==-1){
        cout << 0 << endl;
    }else{
        cout << g << endl;
    }
 
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
