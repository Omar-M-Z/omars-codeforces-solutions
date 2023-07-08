#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> diffs;
    for (int i=0;i<n-1;i++){
        diffs.push_back(abs(a[i]-a[i+1]));
    }
 
    sort(diffs.begin(), diffs.end());
    diffs = vector<int>(diffs.begin()+(diffs.size()-(k-1)), diffs.end());
 
    int pwr=0;
    for (int i=0;i<n-1;i++){
        int cDiff = abs(a[i]-a[i+1]);
        if (find(diffs.begin(), diffs.end(), cDiff)!=diffs.end()){
            diffs.erase(find(diffs.begin(), diffs.end(), cDiff));
        } else{
            pwr+=cDiff;
        }
    }
 
    cout << pwr << endl;
 
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
