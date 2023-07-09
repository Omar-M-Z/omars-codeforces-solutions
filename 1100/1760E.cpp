#include <iostream>
#include <vector>
 
using namespace std;
 
long long total(vector<int>& a){
    long long m=0;
    long long total=0;
    for (int i=0;i<a.size();i++){
        if (a[i]==1){
            m+=1;
        } else{
            total+=m;
        }
    }
    return total;
}
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
 
    //replacing nothing
    long long t1=total(a);
 
    //replacing first 0 with 1
    int c0=-1;
    for (int i=0;i<n;i++){
        if (a[i]==0){
            a[i]=1;
            c0=i;
            break;
        }
    }
    long long t2=total(a);
    if (c0!=-1){
        a[c0]=0;
    }
    
    //replacing last 1 with 0
    for (int i=n-1;i>=0;i--){
        if (a[i]==1){
            a[i]=0;
            break;
        }
    }
    long long t3=total(a);
 
    cout << max(t1, max(t2, t3)) << endl;
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
