#include <iostream>

using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    int minI=0;
    int minVal=a[0];
    for (int i=0;i<n;i++){
        if (a[i]<=minVal){
            minI=i;
            minVal=a[i];
        }
    }
    if (minI>0 && a[0]==minVal){
        cout << "Bob" << endl;
    }
    else if (minI>0){
        cout << "Alice" << endl;
    }else{
        cout << "Bob" << endl;
    }
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
