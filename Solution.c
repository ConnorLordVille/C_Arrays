#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************************************************************** 
 Program: Lab 1
 Author:Joe Meli
 Date: 9/11/15
 Time spent:  2 hours
 Purpose: This program runs through the code  starting in main prompts the user for the 
 file name then calls the two intilized arrays  and the file into the function
 then in the function first gets one line at a time  and finds the comma,
 reads till there and now loads the charaters into the array based on the locations of the loop index.
 does this same process for after the commas. After loading into the arrays 
 then main calls both arrays and prints them out neatley for the user to enjoy.
***********************************************************************/

loadBookName(char* fileName,char authorName[55][1024],char bookName[55][1024]);

FILE * fp;

int main(int args, char* argv[])
{
	char fileName[256];
	printf("File Name to be read from: ");
	scanf("%s",fileName);

	char authorName[55][1024];
	char bookName[55][1024];

	loadBookName(fileName,&authorName,&bookName);

	int i=0;
	for(i=0;i<55;i++)
		printf("Bookname: %sAuthorname: %s\n",bookName[i],authorName[i]);
}
//Precondition: A properly formatted filename that directs towards a properly formatted file, two char arrays that have space to contain the contents of that file
//Postcondition: This method doesn't actually return anything, rather the information is retrieved by the main method through the two arrays that were passed by reference
loadBookName(char* fileName,char authorName[55][1024],char bookName[55][1024])
{
	fp=fopen(fileName, "r");
	int i,x;
	for(i=0;i<55;i++){
		char thisLine[100];
		fgets(thisLine,100,fp);
		int y=0;
		while(thisLine[y]!=',')
		{
			y++;
		}
		for(x=0;x<y;x++)
		{
			[i][x]=thisLine[x];
		}
		int z=y;
		while(thisLine[y]!='\0')
		{
			y++;
		}
		for(x=0;x<y;x++)
		{
			bookName[i][x]=thisLine[z+1+x];
		}
	}
	fclose(fp);
}
