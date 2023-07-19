#include <iostream>
 
using namespace std;
void solve(){
    int n;
    cin >> n;
    string t;
    cin >> t;
    bool removed[n];
    for (int i=0;i<n;i++){
        removed[i]=false;
    }
    long long cost=0;
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j+=i){
            if (t.at(j-1)=='1'){
                break;
            }else{
                if (!removed[j-1]){
                    cost+=i;
                    removed[j-1]=true;
                }
            }
        }
    }
 
    cout << cost << endl;
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
