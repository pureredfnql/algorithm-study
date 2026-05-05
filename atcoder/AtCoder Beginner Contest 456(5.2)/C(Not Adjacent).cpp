#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	string target;

	cin >> target;

	int N;

	N = target.size();

	long long result = 1;

	vector<int> dp(N, 0);

	dp[0] = 1;

	for (int i = 1; i < N; i++) {
		if (target[i] != target[i - 1]) {
			dp[i] = dp[i - 1] + 1;
		}
		else
			dp[i] = 1;
		result = (result + dp[i]) % 998244353;
	}

	cout << result;

}