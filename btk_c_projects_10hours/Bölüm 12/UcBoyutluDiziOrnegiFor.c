/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde üç boyutlu diziler üzerinde
 * döngü kurma
*/

#include <stdio.h>

int main() {

	int benimMatrisim[2][3][4] = { 
						  {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
						  {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}} 
						};
	int i, j, k;
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			for (k = 0; j < 4; k++)
			{
				printf("%d ", benimMatrisim[i][j][k]);
			}
			printf("\n");
		}
		printf("..........................\n");		
	} 
	
  return 0;
}

