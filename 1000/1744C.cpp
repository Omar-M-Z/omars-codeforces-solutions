#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;
    char color;
    string lights;
    std::cin >> n >> color;
    std::cin >> lights;
    lights = lights + lights;

    int minWait=0;
    int currentLightI=0;
    bool tracking=false;
    for (int i=0;i<2*n;i++){
        if (lights.at(i)==color&&i<n&&tracking==false){
            currentLightI=i;
            tracking=true;
        }
        if (lights.at(i)=='g'&&tracking){
            if (i-currentLightI>minWait){
                minWait=i-currentLightI;
            }
            tracking=false;
        }
    }

    cout << minWait << endl;;
}

int main(){
    int t;
    std::cin >> t;
    for (int t1=0; t1<t; t1++){
        solve();
    }
}
