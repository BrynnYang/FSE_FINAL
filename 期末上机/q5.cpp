#include <iostream>
using namespace std;

int main() {
	int n, m;
	int val[300][300];
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			val[i][j] = 100000 / 2 - 1;

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		val[a][b] = c;
	}

	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (val[i][k] + val[k][j] < val[i][j])
					val[i][j] = val[i][k] + val[k][j];

	cout << val[1][n];

	return 0;
}
