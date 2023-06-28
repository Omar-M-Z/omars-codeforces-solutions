#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int i_1;
    int i_2;
    int i_n;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]==1){
            i_1=i;
        } else if (a[i]==2){
            i_2=i;
        } else if (a[i]==n){
            i_n=i;
        }
    }

    if (n>=3){
        if (i_n>i_1&&i_n>i_2){
            cout << i_n+1 << " " << max(i_1,i_2)+1 << endl;
            return;
        }
        else if (i_n<i_1&&i_n<i_2){
            cout << i_n+1 << " " << min(i_1,i_2)+1 << endl;
            return;
        }
        else{
            cout << i_n << " " << i_n << endl;
            return;
        }
    } else{
        cout << 0 << " " << 0 << endl;
        return;
    }

}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
