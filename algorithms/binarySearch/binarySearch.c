#include "binarySearch.h"

int binarySearch(int targetNum, int * array, int arraySize) {
	int leftBoundary = 0;
	int rightBoundary = arraySize - 1;
	int index = 0;

	while(leftBoundary <= rightBoundary){
		index = (leftBoundary + rightBoundary) / 2;

		if (targetNum == array[index]) return index;

		else {
			if (targetNum < array[index]) rightBoundary = index - 1;
			else leftBoundary = index + 1;
		}
	}
	return -1;
	
/* 기존에 작성했던 것. originally written
while(leftIndex < rightIndex){
		if (array[index] < targetNum) {
			if (index == leftIndex) return -1;
			leftIndex = index;
			index = (leftIndex + rightIndex) / 2;
		}
		else if (targetNum < array[index]){
			if (index == rightIndex) return -1;
			rightIndex = index;
			index = (leftIndex + rightIndex) / 2;
		}
		else {
			return index;
		}
	}
	return -1;
*/
	
}

void testBinarysearch() {
	int arr[] = { 2,3,5,6,7,8,9 };
	int targetNum = 0;
	int targetIndex = 0;

	printf("Enter the number you want to find(There are {2,3,5,6,7,8,9}) : ");
	scanf_s("%d", &targetNum);

	targetIndex = binarySearch(targetNum, arr, (sizeof(arr)/sizeof(int)));

	if (targetIndex == -1)
	{
		printf("There is no %d in array.\n", targetNum);
	}
	else {
		printf("The index of %d is %d.\n", targetNum, targetIndex);
	}
}