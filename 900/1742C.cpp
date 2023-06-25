#include <iostream>
#include <vector>

using namespace std;

void solve(){
    std::cin;
    string grid[8];
    for (int i=0;i<8;i++){
        std::cin >> grid[i];
    }
    char last = '.';

    for (int r=0;r<8;r++){
        for (int c=0;c<8;c++){
            if (grid[r].at(c)!='R'){
                break;
            }
            if (grid[r].at(c)=='R' && c==7){
                std::cout <<  "R" << endl;
                return;
            }
        }
    }

    cout << "B" << endl;
    return;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
