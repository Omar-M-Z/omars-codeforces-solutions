#include <iostream>

int p[262144];
using namespace std;
int sort_array(int start, int end){
    int ops=0;
    long long sum1=0;
    long long sum2=0;
    for (int i=start; i<start+((end-start)/2); i++) sum1+= p[i];
    for (int i=start+((end-start)/2); i<end; i++) sum2+= p[i];

    if (sum1 > sum2){
        for (int i=start; i < start+((end-start)/2); i++){
            swap(p[i], p[i+((end-start)/2)]);
        }
        ops++;
    }
    if (end-start>2){
        ops+=sort_array(start, start+((end-start)/2));
        ops+=sort_array(start+((end-start)/2), end);
    }
    return ops;
}

void solve(){
    int m;
    cin >> m;
    for (int i=0;i<m;i++)cin >> p[i];
    int ops;
    ops = sort_array(0, m);

    for (int i=1;i<m;i++){
        if (!(p[i]>p[i-1])){
            cout << -1 << endl;
            return;
        }
    }
    cout << ops << endl;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
