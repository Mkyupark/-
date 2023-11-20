#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}

int main()
{
    map <string, int> store;
    int cnt, stdnum; string stdId;
    
    cin >> cnt >> stdnum;
    
    for(int i =0; i< stdnum; i++){
        cin>> stdId;
        if(store.find(stdId) != store.end()){
            store.erase(stdId);
            store.insert(make_pair(stdId, i));
        }
        else{
            store.insert(make_pair(stdId,i));
        }    
    }
    
    vector <pair<string, int>> v(store.begin(),store.end());
    sort(v.begin(), v.end(), cmp);

    for(auto& it : v) {
        if (cnt > 0) {
                cout << it.first << endl;
                cnt--;
            } else {
                break;
        }

    }
    return 0;
}
