#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row, col, temp;

    cin >> row >> col;
    vector<vector<int>> arr1(row); vector<vector<int>> arr2(row);
    for(int i =0; i<row; i++){ 
        for(int j =0; j<col; j++){
            cin >> temp;
            arr1[i].push_back(temp);
        }
    }
    for(int i =0; i<row; i++){ 
        for(int j =0; j<col; j++){
            cin >> temp;
            arr2[i].push_back(temp);
        }
    }
    for(int i =0; i< row; i++){
        for(int j =0; j<col; j++){
            cout << arr1[i][j] + arr2[i][j];
            if(j != col-1)
                cout <<" ";
        }
        cout <<endl;
    }
    return 0;
}
