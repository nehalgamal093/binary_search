#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout << "Please Enter The Number You Want To Search For: " << endl;
	int num;
	cin >> num;
	sort(v.begin(), v.end());
	int start = 0, end = n - 1 ,mid;
	bool found = false;
	while (start <= end) {
		mid = (start + end) / 2;
		if (v[mid] == num) {
			found = true;
			break;
		}
		if (v[mid] > num) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	if (found) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}

