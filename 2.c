//Maximum Rent

#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t>0) {
		int n;
		scanf("%d", &n);
		int arr[n];
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		int houseRent  = 0;
		int houseNumber = 0;
		for(int i=0;i<n;i++)
		{
			if(arr[i] > res)
			{
				houseRent = arr[i];
				houseNumber = i;
			}
		}
		printf("%d", res);
		printf("\n");
		t = t - 1;

	}

	return 0;
}
