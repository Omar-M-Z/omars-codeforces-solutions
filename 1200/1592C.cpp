#include <iostream>

using namespace std;
void solve(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    if (n>=2*x){
        cout << "YES" << endl;
    }else{
        int lBound=min(0+x,n-1-x);
        int rBound=max(0+x,n-1-x);
        int fMin=a[lBound+1];
        int fMax=a[lBound+1];
        for (int i=lBound+1;i<=rBound-1;i++){
            if (a[i]>fMax) fMax=a[i];
            if (a[i]<fMin) fMin=a[i];
            if (i<rBound-1){
                if (!(a[i]<=a[i+1])){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        int lessFMin=0;
        int greaterFMax=0;
        for (int i=0;i<=lBound;i++){
            if (a[i]<=fMin) lessFMin++;
            if (a[i]>=fMax) greaterFMax++;
        }
        for (int i=rBound;i<=n-1;i++){
            if (a[i]<=fMin) lessFMin++;
            if (a[i]>=fMax) greaterFMax++;
        }
        if (lessFMin>=lBound+1 && greaterFMax>=n-rBound){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
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
