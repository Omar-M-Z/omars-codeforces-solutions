#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n, x;
    cin >> n >> x;
    vector<vector<int> > stacks;
    for (int i=0;i<3;i++){
        vector<int> stack;
        bool broken=false;
        for (int j=0;j<n;j++){
            int y;
            cin >> y;
            if ((y|x)==x && !broken){
                stack.push_back(y);
            }
            else{
                broken=true;
            }
        }
        stacks.push_back(stack);
    } 
    int z=0;
    for (int i=0;i<3;i++){
        for (int j=0;j<stacks[i].size();j++){
            z=z|stacks[i][j];
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
