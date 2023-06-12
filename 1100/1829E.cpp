#include <iostream>
#include <vector>

using namespace std;

int analyzedGridCells[1001][1001];
int depthGrid[1001][1001];

int lakeVolume(int n1, int m1, int n, int m){
    if (analyzedGridCells[n1][m1]){
        return 0;
    } 

    int volume = 0;
    analyzedGridCells[n1][m1] = true;
    volume += depthGrid[n1][m1];

    if (depthGrid[n1][m1] != 0){
        if (n1 > 0){
            volume += lakeVolume(n1-1, m1, n, m);
        }
        if (n1 < n-1){
            volume += lakeVolume(n1+1, m1, n, m);
        }
        if (m1 > 0){
            volume += lakeVolume(n1, m1-1, n, m);
        }
        if (m1 < m-1){
            volume += lakeVolume(n1, m1+1, n, m);
        }
    }
    return volume;
}

void solve(){
    int n; int m;
    cin >> n >> m;
    for (int n1=0; n1<n; n1++){
        for (int m1=0; m1<m; m1++){
            cin >> depthGrid[n1][m1];
            analyzedGridCells[n1][m1] = false;
        }
    }

    int largestVolume = 0;
    for (int n1=0; n1<n; n1++){
        for (int m1=0; m1<m; m1++){
            int volume = lakeVolume(n1, m1, n, m);
            if (volume > largestVolume){
                largestVolume = volume;
            }
        }
    }
    cout << largestVolume << endl;
}

int main(){
    int t;
    cin >> t;
    for (int t1=0; t1<t; t1++){ 
        solve();
    }
}
