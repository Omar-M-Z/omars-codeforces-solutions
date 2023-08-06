#include <iostream>
 
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    long long ones=0;
    long long others=0;
    long long sum=0;
    for (int i=0;i<n;i++){
        if (a[i]==1){
            ones++;
        }else{
            others++;
        }
        sum+=a[i];
    }
 
    if (2*ones+1*others<=sum && n>1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
 
 
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
