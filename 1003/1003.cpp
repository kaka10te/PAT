#include<iostream>
#include<iomanip>
using namespace std;
static const int MAX = 500;
static const int INFTY = (1 << 21);//????cant understand
static const int WHITE = 0;
static const int GREY = 1;
static const int BLACK = 2;

int n, m, c1, c2, M[MAX][MAX], rescue[MAX];

void dijkstra() {
	int minv;
	int d[MAX], color[MAX];

}

int main() {
	cin >> n >> m >> c1 >> c2;
	for (int i = 0; i < n; i++) {
		cin >> rescue[i];
	}
	int x, y, z;
	for (int i = 0; i < m; i++) {
		cin >> x >> y >> z;
		M[x][y] = z;
	}
	dijkstra();
	return 0;
}
