#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
vi pt;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	if (0 == n) {
		cout << 0;
		return 0;
	}

	pt = vi(n);
	for (auto&& x : pt) {
		cin >> x;
	}
	sort(pt.begin(), pt.end());

	const auto q = static_cast<int>(round(n * 0.15));

	auto ans = ll{ 0 };
	for (auto i = q; i < n - q; ++i) {
		ans += pt[i];
	}
	cout << static_cast<int>(round(ans / static_cast<double>(n - 2 * q)));

	return 0;
}