#include <iostream>
using namespace std;
int main() {
	int n, a1[501], a2[501], a3[501], a4[501], cot = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a1[i] >> a2[i] >> a3[i] >> a4[i];


	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				for (int l = 0; l < n; l++)
					if (a1[i] + a2[j] + a3[k] + a4[l] == 0)
						cot++;
	cout << cot;

	return 0;
}