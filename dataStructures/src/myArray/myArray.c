#include "myArray.h"

int * create_myArray(int arraySize) {
	int * arrayPointer;

	/* Allocate memory with the given size */
	arrayPointer = malloc(sizeof(int) * arraySize);

	/* To show this pointer of array is same with the one in test_myArray. */
	printf("The address of the array: %p.\n", arrayPointer);
	return arrayPointer;
}

void test_myArray() {
	int arraySize1 = 0;
	int arraySize2 = 0;

	int * myArray1;
	int * myArray2;
	
	printf("Please Enter an Array size you want for the first array recommend under 5 : ");
	scanf_s("%d", &arraySize1);
	myArray1 = create_myArray(arraySize1);
	printf("The first array generated.\n\n");

	printf("Please Enter an Array size you want for the second array: ");
	scanf_s("%d", &arraySize2);
	myArray2 = create_myArray(arraySize2);
	printf("The second array generated.\n\n");
	
	printf("Start to Enter number to the first array.\n");
	
	/* Gives values to elementes of the array */
	for (int i = 0; i < arraySize1; i++) {
		int num;
		printf("array [%d] = ", i);
		scanf_s("%d", &num);
		*myArray1 = num;
	}

	printf("\nThe second array will be filled automatically.\n");
	/* Gives values to elementes of the array */
	for (int i = 0; i < arraySize2; i++) myArray2[i] = i;

	/* Print array Value */
	printf("\nStart to print elements of the first array.\n");
	for (int i = 0; i < arraySize1; i++)
		printf("array1 [%d] = %d \n", i, *(myArray1+i));

	printf("\nStart to print elements of the second array.\n");
	for (int i = 0; i < arraySize2; i++)
		printf("array2 [%d] = %d \n", i, myArray2[i]);

	printf("\nThe address of the first array: %p will be freed.\n", myArray1);
	printf("The address of the second array: %p will be freed.\n", myArray2);

	/* Since this pointer is same with the one in create_myArray, so the
	memory of this pointer is freed with next free function. */
	free(myArray1);
	free(myArray2);
}