#include <iostream>
#include <vector>

using namespace std;

string solution(string number, int k) {

	vector<char> v;
	int len = number.length();
	int want = number.length() - k;
	int count = 0;
	while (len--) {
		if (v.empty()) {
			v.push_back(number[count]);
			count++;
		}
		else if ((v[0] < number[count]) && (want <= (number.length() - count - 1))) {
			v.clear();
			v.push_back(number[count]);
			count++;
		}
		else if ((v.back() < number[count]) && ((want - v.size()) <= (number.length() - count - 1))) {

			while (1) {
				if (((v.size() + number.length() - count - 1) >= want) && (v.back() < number[count])) {
					v.pop_back();
				}
				else {
					v.push_back(number[count]);
					count++;
					break;
				}

			}
		}
		else if ((want - v.size()) < (number.length() - count - 1) && (v.size() < want))
		{
			v.push_back(number[count]);
			count++;
		}
		else if (v.back() > number[count]) {
			if (want <= v.size()) {
				count++;
			}
			else {
				v.push_back(number[count]);
				count++;
			}
		}
		else if ((want - v.size()) >= (number.length() - count - 1)) {
			v.push_back(number[count]);
			count++;
		}

	}
	string answer(v.begin(), v.end());
	return answer;
}

int main() {
	string number = "832957843219237";

	cout<< solution(number, 12);
	


}