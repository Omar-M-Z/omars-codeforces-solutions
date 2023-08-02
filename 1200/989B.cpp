#include <iostream>

using namespace std;
void solve(){
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;

    bool sb=false;
    for (int i=0;i<=n-p-1;i++){
        if (s.at(i)!=s.at(i+p) && s.at(i)!='.' && s.at(i+p)!='.'){
            sb=true;
            break;
        }
        else if (s.at(i)=='.' && s.at(i)!=s.at(i+p)){
            int r=abs(int(s.at(i+p))-49);
            char c=r+'0';
            s[i]=c;
            sb=true;
            break;
        }
        else if (s.at(i+p)=='.' && s.at(i)!=s.at(i+p)){
            int r=abs(int(s.at(i))-49);
            char c=r+'0';
            s[i+p]=c;
            sb=true;
            break;
        }
        else if (s.at(i)=='.' && s.at(i+p)=='.'){
            s[i]='1';
            s[i+p]='0';
            sb=true;
            break;
        }
    }
    if (sb){
        for (int i=0;i<n;i++){
            if (s.at(i)=='.'){
                s[i]='0';
            }
        }
        cout << s << endl;
        return;
    }
    cout << "No" << endl;
}

int main(){
    /*
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }*/
    solve();
}
