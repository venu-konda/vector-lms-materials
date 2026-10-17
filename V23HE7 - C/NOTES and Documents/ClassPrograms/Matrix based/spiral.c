#include <stdio.h>
#define R 4
#define C 4

void spiralPrint(int m, int n, int (*a)[C])
{
	int i, k = 0, l = 0;

	/*  k - starting row index
	    m - ending row index
	    l - starting column index
	    n - ending column index
	    i - iterator
	    */

	while (k < m && l < n)
	{
		/* Print the first row from the remaining rows */
		for (i = l; i <= n; ++i) {
			printf("%d ", a[k][i]);
		}
		k++;

		/* Print the last column from the remaining columns
		*/
		for (i = k; i <= m; ++i)
		{
			printf("%d ", a[i][n ]);
		}
		n--;

		/* Print the last row from the remaining rows */
		if (k <=m)
	       	{
			for (i = n ; i >= l; --i) {
				printf("%d ", a[m][i]);
			}
			m--;
		}

		/* Print the first column from the remaining columns
		*/
		if (l < n) {
			for (i = m; i >= k; --i) {
				printf("%d ", a[i][l]);
			}
			l++;
		}
	}
}

/* Driver Code */
int main()
{
	int a[R][C] =  {{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}};

	// Function Call
	spiralPrint(R-1, C-1, a);
	return 0;
}

