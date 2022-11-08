#include <iostream>

using namespace std;
int main() {
	int num;
	int a =0, b =0, c=0, count=0, number=100;
	int temp=0, sample=0, cs=0;
	cin >> num;

	if (num < 100) { cout << num; }
	else {
		sample = num - 99;
		cs = 99;
		while (sample--) {
			c = number % 10;
			b = (number / 10) % 10;
			a = (number / 100);
			temp = b-a;
			if ((b + temp) == c) { count++; }
			number++;
		}
		cs += count;
		cout << cs;
	}
}