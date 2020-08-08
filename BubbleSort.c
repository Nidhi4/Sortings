#include <stdio.h>
#define SIZE 20

void BubbleSort (int *array, int n) ;
int main(void)
{
	int array[SIZE] = {0} ;
	int n = 0 ;
	int i = 0 ;

	printf("Enter the length of the array = ") ;
	scanf("%d", &n) ;

	printf("Enter the elements of the unsorted array = ") ;
	for(i=0 ; i<n ; ++i)
	{
		scanf("%d", &array[i]) ;
	}

	BubbleSort (array, n) ;
	printf("Sorted Array :\n") ;

	for(i=0 ; i<n ; ++i)
	{
		printf("%d ", array[i]) ;
	}

	return 0 ;
}
void BubbleSort (int *array, int n)
{
	int i = 0 ;
	int j = 0 ;
	int swap = 0 ;

	for(i=0 ; i<n ; ++i)
	{
		for(j=0 ; j<n-i-1 ; ++j)
		{
			if(array[j] > array[j+1])
			{
				swap = array[j] ;
				array[j] = array[j+1] ;
				array[j+1] = swap ;
			}
		}
	}
}


