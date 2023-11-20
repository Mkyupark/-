#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d; int idx, cnt, loc, answer =0, temp;
    cin>> idx >> cnt;
    for(int i =0; i< idx; i++){
        d.push_back(i+1);
    }
    while(cnt--){
        cin>> temp;
        for(int i =0; i<d.size(); i++){
            if(temp == d[i]){
                loc = i;
                break;
            }
        }
        if(loc < d.size() - loc){
            while(1){
                if(d.front() == temp){
                    d.pop_front();
                    break;
                }
                ++answer;
                d.push_back(d.front());
                d.pop_front();
            }
        }else{
            while(1){
                if(d.front() == temp){
                    d.pop_front();
                    break;
                }
                ++answer;
                d.push_front(d.back());
                d.pop_back();
            }
        }
        
    }
    cout <<answer;
    return 0;
}
