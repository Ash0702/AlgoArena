#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    bool found = false;
    int n; long x; cin >> n >> x;
    long ruff;
    vector <pair<long,int>> v;
    for(int i = 0 ; i  < n ; i++){
        cin >> ruff;
        v.push_back( make_pair(ruff, i+1));
    }
    sort(v.begin(), v.end());
    /*for(int k = 0 ; k < n ; k++){
        cout << v[k].first << " " << v[k].second << " \n";
    }*/
    int i = 0, j= n-1;
    for( ;j > i ;  ){
        if((v[i].first)+(v[j].first) == x){
            found = true;
            break;
        }
        if((v[i].first)+(v[j].first) < x){
            i++;
        }
        if((v[i].first)+(v[j].first) > x){
            j--;
        }
    }
    if(found){
        cout << v[i].second << " " << v[j].second;
    }
    if(!found){
        cout << "IMPOSSIBLE";
    }
    return 0;
}