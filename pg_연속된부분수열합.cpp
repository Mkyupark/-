#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(const pair<int,int> a, const pair<int,int> b){
    if(a.second == b.second) {
        return a.first <b.first;
    }
    return a.second < b.second;
}
vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    vector<pair<int,int>> temp; int idx;
    vector<pair<int,int>> cal;
    int begin =0; int end =0; int sum =sequence[0];
    while(begin <= end && end <= sequence.size()){
        if(sum > k){
            sum -= sequence[begin++];
        }else if(sum < k){
            sum+= sequence[++end];
        }else if (sum == k){
            temp.push_back(make_pair(begin, end));
            cal.push_back(make_pair(temp.size()-1,end-begin));
            sum -= sequence[begin++];
        }
    }
    sort(cal.begin(),cal.end(), compare);
    
    answer.push_back(temp[cal[0].first].first); 
    answer.push_back(temp[cal[0].first].second);

    return answer;
}
