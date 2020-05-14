#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[100000], results[100000]; 
	int search, num, num_r, count, div_count = 0;

	printf("How many numbers do you want?\n");
	scanf("%d", &count);

	printf("Enter %d intergers(s)\n", count);

	for (num = 0; num < count; num++){
			scanf("\n %d", &array[num]);
		}

	for (num = 0; num < count; num++){
		if ((array[num] % 7) == 0){
			results[div_count] = array[num];
			div_count++;
			printf("There is a divisble in your array\n");

		}
	}

	printf("the numbers in the array are: \n");

	for (num = 0; num < count; num++){
		printf(" %d", array[num]);
	}

	printf("the divisble numbers are: \n");

	for (num = 0; num < div_count; num++){
		printf(" %d\n", results[num]);
	}

	return 0;
}
