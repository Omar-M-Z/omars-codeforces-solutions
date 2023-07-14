#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r=0;
    for (int i=0;i<=n-3;i++){
        if (s.at(i)==s.at(i+2)){
            r++;
        }
    }
    cout << n-1-r << endl;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
} 
