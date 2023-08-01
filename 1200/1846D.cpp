#include <iostream>
#include <iomanip>

using namespace std;
void solve(){
    int n;
    long long d, h;
    cin >> n >> d >> h;
    int y[n];
    for (int i=0;i<n;i++){
        cin >> y[i];
    }
    long double treeArea=0.0;
    long double branchArea=(long double)(d*h)/2.0;
    for (int i=0;i<n-1;i++){
        if (y[i]+h>y[i+1]){
            long double h2=(h-(y[i+1]-y[i]));
            long double d2=(d*h2)/h;
            long double excessArea=(d2*h2)/2.0;
            treeArea+=(branchArea-excessArea);
        }else{
            treeArea+=branchArea;
        }
    }
    treeArea+=branchArea;
   cout << fixed << setprecision(9) << treeArea << endl;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
