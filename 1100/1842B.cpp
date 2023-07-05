#include <iostream>

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int z=0;
    for (int i=0;i<3;i++){
        bool broken=false;
        for (int j=0;j<n;j++){
            int y;
            cin >> y;
            if ((y|x)==x && !broken){
                z=z|y;
            }
            else{
                broken=true;
            }
        }
    }
    if (z==x){
        cout << "YES" << endl;
    } else{
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
