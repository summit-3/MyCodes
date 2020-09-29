//Maximum Rent

#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int arr[n];
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] > res) {
				res = arr[i];
			}
		}
		printf("%d", res);
		printf("\n");

	}

	return 0;
}
