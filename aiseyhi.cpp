/*input
900
7570423817272967027553082464863962024635217372307919506594193055572300657732661146354209508997483330
*/
#include <bits/stdc++.h>
using namespace std;

int k;
string n;
int cnt[10];

int main() {
	cin >> k >> n;

	int cur = 0;
	for (int i = 0; i < (int) n.size(); i++) {
		int digit = n[i] - '0';
		cnt[digit]++;
		cur += digit;
	}

	int ans = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			if (cur < k) {
				ans++;
				cur += 9 - i;
			}
			else{
				break;
			}
		}
	}
	cout<<nums;

	return 0;
}