#include <iostream>
#include <vector>
#include <string>

using namespace std;

int checkalp(vector<char> temp, char c){
    for(int i =0; i< temp.size(); i++){
        if(temp[i] == c){
            return 0;
        }
    }
    return 1;
}

int check(string word){
    vector<char> temp;
    char c = word[0];
    temp.push_back(c);
    int ans;
    for(int i =1; i< word.length(); i++){
        if(c != word[i]){
            ans = checkalp(temp, word[i]);
            if(ans == 1){
                c = word[i];
                temp.push_back(word[i]);
            }else
                return 0;
        }
    }
    return 1;
}

int main()
{
    vector <string> wordList;
    int idx, answer =0;
    string word;
    cin >> idx;
    
    for(int i =0; i< idx; i++){
        cin >> word;
        wordList.push_back(word);
    }
    for(int i =0; i< idx; i++){
        answer += check(wordList[i]);
    }
    cout << answer;
    return 0;
}
