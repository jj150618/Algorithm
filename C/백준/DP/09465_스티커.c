#include <stdio.h>

int main(void)
{
	int i, j;
	int test_n, n;
	int array[2][100000];
	scanf("%d", &test_n);

	while(test_n--)
    {
		scanf("%d", &n);
        i = -1;
		while (++i < 2)
        {
            j = -1;
			while (++j < n)
				scanf("%d", &array[i][j]);
        }
		array[0][1] += array[1][0];
		array[1][1] += array[0][0];
		j = 1;
        while (++j < n)
        {
			array[0][j] += (array[1][j - 1] > array[1][j - 2] ? array[1][j - 1] : array[1][j - 2]);
			array[1][j] += (array[0][j - 2] > array[0][j - 1] ? array[0][j - 2] : array[0][j - 1]);
		}

		printf("%d\n", array[0][n - 1] > array[1][n - 1] ? array[0][n - 1] : array[1][n - 1]);
	}

	return 0;
}