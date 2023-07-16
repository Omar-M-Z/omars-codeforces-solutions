#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> route;
    bool n1=false;
    for (int i=0;i<n;i++){
        if (!n1){
            if (i==0 && a[i]==1){
                route.push_back(n+1);
                route.push_back(i+1);
                n1=true;
            }else if (i==n-1 && a[i]==0){
                route.push_back(i+1);
                route.push_back(n+1);
                n1=true;
            } else if (i<=n-2 && a[i]==0 && a[i+1]==1){
                route.push_back(i+1);
                route.push_back(n+1);
                n1=true;
            } else{
                route.push_back(i+1);
            }
        }else{
            route.push_back(i+1);
        }
    }
    if (route.size()==n+1){
        for (int i=0;i<route.size();i++){
            cout << route[i] << " ";
        }
        cout << endl;
    } else{
        cout << -1 << endl;
    }
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
} 
