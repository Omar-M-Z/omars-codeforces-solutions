#include <iostream>
#include <vector>
 
using namespace std;
void solve(){
    string s;
    cin >> s;
    bool appeared[26]={0};
    int l=0;
    for (int i=0;i<s.size();i++){
        if (appeared[s.at(i)-'a']){
            l+=2;
            for (int j=0;j<26;j++) appeared[j]=false;
        }else{
            appeared[s.at(i)-'a']=true;
        }
    }
    cout << s.size()-l << endl;
}
 
int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
