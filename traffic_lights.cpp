#include <bits/stdc++.h>
using namespace std;



int main(){
    int n ; long x; cin >> x >> n;
    set <long> v;
    v.insert(0); v.insert(x);
    multiset <long> s;
    s.insert(x);
    long ruff;
    set<long>::iterator it,it2;
    
    for(int i = 0 ; i < n ; i++){
        cin >> ruff;
        it = v.upper_bound(ruff);
        it2 = (--it);it++;
        s.erase(s.find((*it)-(*it2)));
        s.insert((*it) - ruff);
        s.insert((ruff) - (*it2));
        v.insert(ruff);
        
        cout << *(--(s.end())) << " ";
    }


    return 0;
}