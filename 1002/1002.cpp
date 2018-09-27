#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int k1, k2, n = 0, count = 0;
	float a[1001] = { 0 }, temp;
	cin >> k1;
	for (int i = 0; i < k1; i++) {
		cin >> n >> temp;
		a[n] = temp;
	}
	cin >> k2;
	for (int i = 0; i < k2; i++) {
		cin >> n >> temp;
		a[n] += temp;
	}
	for (int i = 0; i < 1001; i++) {
		if (a[i] != 0)
			count++;
	}
	cout << count;
	for (int i = 1000; i >= 0; i--) {
		if (a[i] != 0)
			cout << " " << i << " " << fixed << setprecision(1) << a[i];
	}
	return 0;
}


//int main() {//ŒÛ»Î∆ÁÕæ£¨¬ﬂº≠∏¥‘”£¨…–Œ¥Ω‚æˆ
//	int k1, k2;
//	float a1[10], a2[10], a[20];
//	int n1[10], n2[10], n[20];
//	//∏≥÷µ
//	cin >> k1;
//	for (int j = 0; j < k1; j++) {
//		cin >> n1[j] >> a1[j];
//	}
//	cin >> k2;
//	for (int j = 0; j < k2; j++) {
//		cin >> n2[j] >> a2[j];
//	}
//	//œ‡º”
//	int count = 0;
//	int i = 0, j = 0;
//	while (i < k1 || j < k2) {
//		if (n1[i] > n2[j] && i < k1) {
//			n[count] = n1[i];
//			a[count] = a1[i];
//			count++;
//			i++;
//		}
//		else if (n1[i] < n2[j] && j < k2) {
//			n[count] = n2[j];
//			a[count] = a2[j];
//			count++;
//			j++;
//		}
//		else if (n1[i] == n2[j]) {
//			if ((a1[i] + a2[j]) == 0) {
//				i++; j++;
//				continue;
//			}
//			n[count] = n2[j];
//			a[count] = a1[i] + a2[j];
//			count++;
//			i++; j++;
//		}
//		else if (i >= k1 && j < k2) {
//			n[count] = n2[j];
//			a[count] = a2[j];
//			count++;
//			j++;
//		}
//		else if (j >= k2 && i < k1) {
//			n[count] = n1[i];
//			a[count] = a1[i];
//			count++;
//			i++;
//		}
//	}
//	cout << count ;
//	
//	for (int i = 0; i < count; i++) {
//		cout << " " << n[i] << " " << fixed << setprecision(1)<< a[i];
//	}
//	return 0;
//}