#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sizeOfRawArray,
		digitForFilter,
		indexOfFilteredArray = 0,
		temp = 0;
	
	puts("Insert a size of an array to work with:");
	
	scanf("%d", &sizeOfRawArray);
	
	int rawArray[sizeOfRawArray],
		filteredArray[sizeOfRawArray];
			
	for(int i = 0; i < sizeOfRawArray; i++)
	{
		rawArray[i] = rand()%999;
		printf("[%d]\t", rawArray[i]);
	}
	
	puts("\nInsert a digit to filter:");
	scanf("%d", &digitForFilter);
	
	for(int i = 0; i < sizeOfRawArray; i++)
	{
		filteredArray[i] = 0;
	}
	
	for(int j = 0; j < sizeOfRawArray; j++)
	{
		if(rawArray[j] > 100)
		{
			temp = rawArray[j]/10;
			if(temp%10 == digitForFilter)
			{
				filteredArray[indexOfFilteredArray] = rawArray[j];
				indexOfFilteredArray++;
			}
		}
	}
	
	puts("\n");
	
	for(int i = 0; i < sizeOfRawArray; i++)
	{
		if(filteredArray[i] > 0) printf("[%d]\t", filteredArray[i]);
	}
return 0;
}

