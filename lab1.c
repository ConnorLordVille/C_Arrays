#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void loadBookName(char file_name[], char* books[],char* writers[]);

int main(int argc,char* argv[])
{	//will hold the file name
	char file[100];
	char *author[55];
	char *bookname[55];
	int x;
	printf("File Name:");
	scanf("%s",file);
	loadBookName(file, author,bookname);
	/*for( x = 0; x < 55; x ++)
	{
	printf("%s\n",author[x] );
	printf("%s\n",bookname[x]);
}*/
	return 0;
}
//Precondtion:
void loadBookName(char file_name[],char *books[],char* writers[])
{
	// File pointer
	FILE *fp;
	// buffer for reading the text file
	char buffer [500];
	// char that will hold strings to save to arrays
	char *token;
	// what we will read too
	const char comma = ',';
	// loop control variables
	int i = 0;
	int j= 0;
	// opens file
	fp = fopen(file_name,"r");
	//checks the file to make sure it contains info
	// otherwise exits program
	if ( fp == NULL)
	{
		printf("Error");
		exit(1);
	}
		//start of while
		while (fgets(buffer,500,fp)!=NULL)
		{// this loop goes through file using the buffer
			// reads from the begging of the line to the comma
			printf("BT1:%s\n",token );
			token = strtok(buffer, &comma);
			printf("AT1:%s\n",token );
				i++;
			while( token != NULL )
			{
			// load into array
				printf("BT2:%s\n",token);
				 token = strtok(NULL,"\n");
				 printf("AT2:%s\n",token);
				 token = NULL;
			}
				j++;
}//end of while

	fclose(fp);
}
//Postcondtion:
