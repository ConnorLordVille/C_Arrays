#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void loadBookName(char file_name[], char books[],char writers[]);

int main(int argc,char* argv[])
{	//will hold the file name
	char file[100];

	char *author[55];
	char *bookname[55];
	printf("File Name:");
	scanf("%s",file);
	loadBookName(file, *author,*bookname);
	return 0;
}
//Precondtion:
void loadBookName(char file_name[],char books[],char writers[])
{
	// File pointer
	FILE *fp;
	// buffer for reading the text file
	char buffer [500];
	char *token;
	const char comma[2] = ",";
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
			token = strtok(buffer, comma);
			//load into array
		//	strcpy( token, &writers[i]);
i++;

			while( token != NULL )
			{
			
				 printf( " %s\n", token );
				 token = strtok(NULL, "\n");
				 // load into array


			}
			j++;

}
		printf("%d\n",i );
		printf("%d\n",j );
		//end of while
	fclose(fp);
}
//Postcondtion:
