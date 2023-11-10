#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int max = 0; int next_max =0;
    char max_alp;
    int temp =1;
    cin >> s;
 
    for(int i =0; i<s.length(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){}
        else{
            s[i] = s[i] - 'a' + 'A';
        }
    }
    sort(s.begin(), s.end());
    for(int i=0; i<s.length() -1; i++){
        if(s[i] == s[i+1]){
            temp++;
        }
        else{
            if(max < temp){
                max = temp;
                max_alp = s[i];
                temp =1;
            }
            else if(next_max < temp){
                next_max = temp;
                temp =1;
            }
            else temp =1;
        }
    }
    if(max < temp){
        max = temp;
        max_alp = s[s.length() -1];
        temp =1;
    }
    else if(next_max < temp){
        next_max = temp;
        temp =1;
    }
    
    if(max == next_max){
        cout << "?";
    }else{
        cout <<max_alp;
    }
    
    
    return 0;
}
