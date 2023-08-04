#include <iostream>

using namespace std;
void solve(){
    int n;
    cin >> n;
    int x[n], r[n];
    for (int i=0;i<n;i++) cin >> x[i];
    for (int i=0;i<n;i++){
        int y;
        cin >> y;
        r[i]=y-x[i];
    }
    sort(r, r+n);
    int groups=0;
    int s=0, e=n-1;
    while (s<=e-1){
        if (r[e]+r[s]>=0){
            groups++;
            e--;
            s++;
        }else{
            s++;
        }
    }
    cout << groups << endl;

}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
