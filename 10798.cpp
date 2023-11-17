#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int cnt = 5; int idx =0; int temp =0; string s;
    vector<vector<char>> arr(5, vector<char>(15, ' '));
    
    while(cnt--){
        getline(cin, s);
        for(int i =0; i< s.length(); i++){
            arr[idx][i] = s[i];
        }
        ++idx;
    }
    for(int j =0; j<15; j++){
        for(int i = 0; i< 5; i++){
            if(arr[i][j] != ' ')
                cout << arr[i][j];
        }
    }
}
