#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;


int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    sort(scoville.begin(),scoville.end());
    for(auto it = scoville.begin(); it!=scoville.end(); ++it){
        q.push(*it);
    }
    while(q.size() >1 && q.top() <K){
        int i = q.top();
        q.pop();
        int j = q.top();
        q.pop();
        answer++;
        q.push(i+j*2);
    }
    int t = q.top();
    q.pop();
    if(t < K && q.empty()) answer= -1;

    return answer;
}
