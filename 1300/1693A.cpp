#include <iostream>

using namespace std;
void solve(){
    int n;
    cin >> n;
    long long a[n];
    long long op1[n];
    long long sum=0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    if (sum!=0){
        cout << "No" << endl;
        return;
    }
    for (int i=0;i<n;i++){
        if (i==0){
            op1[0]=a[0];
        }else{
            op1[i]=a[i]+op1[i-1];
        }
    }
    bool broken=false;
    for (int i=0;i<n;i++){
        if (broken && op1[i]!=0){
            cout << "No" << endl;
            return;
        }
        if (op1[i]==0){
            broken=true;
        }
        if (op1[i]<0){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
