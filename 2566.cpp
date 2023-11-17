#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int idx = 9, temp, max, row=0, col=0;
    vector<vector<int>> arr(idx);
    for(int i = 0; i< idx; i++){
        for(int j =0; j<idx; j++){
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    max = arr[0][0];
    for(int i =0; i< idx; i ++){
        for(int j =0; j< idx; j++){
            if(max < arr[i][j]){
                max = arr[i][j]; row = i; col = j;
            }
        }
    }
    cout << max << endl << row+1 << " "<<col +1;
}
