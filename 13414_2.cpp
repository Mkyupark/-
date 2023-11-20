//문제 개같아서 포기
#include <iostream>
#include <vector>
#include <string>
#include <stack>
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
    stack<string> s;
    int cnt, stdnum; string stdId;
    
    cin >> cnt >> stdnum;

    for(int i =0; i< stdnum; i++){
        cin>> stdId;
        s.push(stdId);    
    }
    int i = stdnum;
    while(!s.empty()){
        store.insert(make_pair(s.top(),i--));
        s.pop();
    }
    vector<pair<string, int>> answer(store.begin(),store.end());
    sort(answer.begin(),answer.end(), cmp);
    
    for(auto& it: answer){
        if(cnt > 0){
            cout <<it.first <<endl;
            cnt--;
        } else break;
    }
    
    return 0;
}
