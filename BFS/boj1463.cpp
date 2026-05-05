#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	queue<int> Q;
	int N;
	cin >> N;
	vector<int> vis(N + 1, -1);
	Q.push(N);
	vis[N] = 0;
	while (!Q.empty()) {
		int tmp = Q.front(); Q.pop();
		if (tmp % 3 == 0 && vis[tmp / 3] == -1) {
			vis[tmp / 3] = vis[tmp] + 1;
			Q.push(tmp / 3);
		}
		if (tmp % 2 == 0 && vis[tmp / 2] == -1) {
			vis[tmp / 2] = vis[tmp] + 1;
			Q.push(tmp / 2);
		}
		if (tmp - 1 >= 1 && vis[tmp - 1] == -1) {
			vis[tmp - 1] = vis[tmp] + 1;
			Q.push(tmp - 1);
		}
	}
	cout << vis[1];
}