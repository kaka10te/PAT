#include<iostream>
#include <iomanip>
int main() {
	using namespace std;
	int a, b;
	int sum = 0;
	int x, y, z;
	cin >> a;
	cin >> b;
	sum = a + b;
	if (abs(sum) > 999999) {
		x = sum / 1000000;
		y = abs(sum / 1000 % 1000);
		z = abs(sum % 1000);
		cout << x << "," << setfill('0') << setw(3) << y << "," << setfill('0') << setw(3) << z << endl;
		return 0;
	}
	else if (abs(sum) > 999 && abs(sum) < 1000000) {
		x = sum / 1000;
		y = abs(sum - 1000 * x);
		cout << x << "," << setfill('0') << setw(3) << y << endl;
		return 0;
	}
	else {
		cout << sum << endl;
		return 0;
	}
}