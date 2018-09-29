#include<iostream>
using namespace std;
static const int MAX = 510;
static const int inf = (1 << 21);//很大的数
static const int WHITE = 0;//未访问的顶点
static const int GRAY = 1;//正访问的顶点
static const int BLACK = 2;//已访问结束的顶点

int n, m, c1, c2, e[MAX][MAX], weight[MAX], w[MAX];

void dijkstra() {
	int minv;
	int d[MAX], color[MAX], num[MAX];

	fill(d, d + MAX, inf);
	fill(color, color + MAX, WHITE);
	//for (int i = 0; i < n; i++) {
	//	d[i] = inf;
	//	color[i] = WHITE;
	//}

	d[c1] = 0;
	w[c1] = weight[c1];
	color[c1] = GRAY;
	num[c1] = 1;
	while (1) {
		minv = inf;
		int u = -1;
		for (int i = 0; i < n; i++) {
			if (minv > d[i] && color[i] != BLACK) {
				u = i;
				minv = d[i];
			}
		}

		if (u == -1)
			break;
		color[u] = BLACK;//选出最小顶点置黑
		for (int v = 0; v < n; v++) {//更新顶点v值，更新点权，
			if (color[v] != BLACK && e[u][v] != inf) {
				if (d[v] > d[u] + e[u][v]) {
					d[v] = d[u] + e[u][v];
					num[v] = num[u];
					w[v] = weight[v] + w[u];
					color[v] = GRAY;
				}
				else if (d[v] == d[u] + e[u][v]) {
					num[v] += num[u];
					if (weight[v] + w[u] > w[v])
						w[v] = weight[v] + w[u];
					color[v] = GRAY;
				}
			}
		}
	}
	cout << num[c2] << " " << w[c2];
}

int main() {
	cin >> n >> m >> c1 >> c2;
	for (int i = 0; i < n; i++) {
		cin >> weight[i];
	}

	fill(e[0], e[0] + MAX * MAX, inf);//初始化二维数组
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		e[i][j] = inf;
	//	}
	//}

	int u, v, c;
	for (int i = 0; i < m; i++) {
		cin >> u >> v >> c;
		e[u][v] = e[v][u] = c;
	}

	dijkstra();
	return 0;
}