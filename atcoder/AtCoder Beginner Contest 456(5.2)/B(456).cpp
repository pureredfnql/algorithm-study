#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void setting(vector<int>& k) {
	int num;
	for (int i = 0; i < 6; i++) {
		cin >> num;
		if (num == 4) k[0] += 1;
		else if (num == 5) k[1] += 1;
		else if (num == 6) k[2] += 1;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> dice_1(3, 0);
	vector<int> dice_2(3, 0);
	vector<int> dice_3(3, 0);

	setting(dice_1);
	setting(dice_2);
	setting(dice_3);

	float result = 0.0;

	vector<int> v{ 0,1,2 };

	do {
		int sum = 0;
		auto it = v.begin();
		sum += dice_1[*it];
		it++;
		sum *= dice_2[*it];
		it++;
		sum *= dice_3[*it];
		result += sum;
	} while (next_permutation(v.begin(), v.end()));

	float out = result / 216;

	cout << out;
}

//next_permutation 사용법 익히자!