#include <iostream>

using namespace std;

void solve(){
    long long  n, x;
    cin >> n >> x;
    long long a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    long long min=a[0];
    long long max=a[0];
    long long changes=0;
    for (int j=0;j<n;j++){
        if (a[j]>max){
            max=a[j];
        } else if (a[j]<min){
            min=a[j];
        }
        if (max > min+2*x){
            changes+=1;
            min=a[j];
            max=a[j];
        }
    }
    cout << changes << endl;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
