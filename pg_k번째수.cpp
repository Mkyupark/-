#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto it = commands.begin(); it != commands.end(); it++){
        vector<int> cpArr(array.begin() + it->at(0) -1, array.begin() + it->at(1));
        sort(cpArr.begin(), cpArr.end());
        answer.push_back(cpArr[it->at(2) -1]);
    }
    return answer;
}
