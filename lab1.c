#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


void loadBookName(char file_name[], char array1[],char array2[]);

int main(int argc,char* argv[])
{	//will hold the file name 
	char file[100];

	char author[55];
	char bookname[55];
	printf("File Name:");
	scanf("%s",file);
	loadBookName(file, author,bookname);
	return 0;
}


//Precondtion: 
void loadBookName(char file_name[],char array1[],char array2[])
{
	// File pointer
	FILE *fp;
	// buffer for reading the text file
	char buffer [100];
	// opens file ffvs
	fp = fopen(file_name,"r");
	//checks the file to make sure it contains info
	// otherwise exits program
	if ( fp == NULL)
	{
		printf("Error");
		exit(1);
	}

	// starts getting the text from the file and loadin
	// into the buffer
	while (fgets(buffer,100,fp)!=NULL)
	{
		printf("%s\n",strtok(buffer, ","));
		
	}
	
	
	fclose(fp);
}
//Postcondtion: 
