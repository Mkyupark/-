#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int check(char c) {
    if ('0' <= c && c <= '9')
        return c - '0';
    else
        return c - 'A' + 10;
}

int main()
{
    string num; int formation; int answer =0; int cal;
    cin >> num >> formation;
    int len = num.length();
    for (int i = len - 1, j = 0; i >= 0, j <= len - 1; i--, j++) {
        cal = check(num[i]);
        answer += cal*(static_cast<int>(pow(formation, j)));
    }
    cout << answer;

}
