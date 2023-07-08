#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int m[n][n];
    int cMin=1, cMax=n*n;
    int r=0,c=-1;
    for (int i=0;i<n*n;i++){
        if (r%2==0){
            if (c>=n-1){
                c=n-1;
                r++;
            }else{
                c++;
            }
        } else{
            if (c<=0){
                c=0;
                r++;
            }else{
                c--;
            }
        }
        if ((i%2)==0){
            m[r][c]=cMin;
            cMin++;
        } else{
            m[r][c]=cMax;
            cMax--;
        }
    }
    for (int r=0;r<n;r++){
        for (int c=0;c<n;c++){
            cout << m[r][c] << " ";
        }
        cout << endl;
    }

}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
} 
