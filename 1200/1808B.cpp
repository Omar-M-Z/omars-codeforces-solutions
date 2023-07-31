#include <iostream>

using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    long long cards[m][n];
    for (int n1=0;n1<n;n1++){
        for (int m1=0;m1<m;m1++){
            cin >> cards[m1][n1];
        }
    }
    for (int m1=0;m1<m;m1++){
        sort(cards[m1], cards[m1]+n);
    }
    long long total=0;
    for (long long m1=0;m1<m;m1++){
        for (long long n1=0;n1<n;n1++){
            total+=n1*cards[m1][n1];
            total-=(n-n1-1)*cards[m1][n1];
        }
    }
    cout << total << endl;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
