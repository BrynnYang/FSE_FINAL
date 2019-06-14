#include <iostream>
using namespace std;
const int MAX = 100000 / 2 - 1;
int main() {
	int way[200][200];
	int n1, n2;
	cin >> n1>> n2;
	for (int i = 1; i <= n1; i++)
		for (int j = 1; j <= n1; j++)
			way[i][j] = MAX;
	for (int i = 0; i < n2; i++) {
		int p, q, r;
		cin >> p >> q >> r;
		way[p][q] = r;
	}
	for (int k = 1; k <= n1; k++)
		for (int i = 1; i <= n1; i++)
			for (int j = 1; j <= n1; j++)
				if (way[i][j]>way[i][k] + way[k][j])
					way[i][j] = way[i][k] + way[k][j];
	printf("%d",way[1][n1]);
	return 0;
}
