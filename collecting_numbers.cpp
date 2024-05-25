#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    int ruff;
    vector <pair<int, int>> v;
    for(int i = 0 ; i < n ; i++){
        cin >> ruff;
        v.push_back(make_pair(ruff, i));
    }
    sort(v.begin(), v.end());
    ruff = 1;
    /*for(int i = 0 ; i < n ; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }*/
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i].second > v[i+1].second){
            ruff++;
        }
    }
    cout << ruff;


    return 0;
}