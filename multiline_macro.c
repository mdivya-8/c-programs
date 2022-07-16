#include <stdio.h>
// Multi-line Macro definition
#define ELE 3, \
	    4, \
	    5
int main()
{
	int arr[] = { ELE };
	printf("Elements of Array are:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}
}