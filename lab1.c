#include <stdio.h>
#include <stdlib.h>

/********************************* 
Program: Lab 1
Author: Joe Meli
Date:  9/9/15
Time spent: all day everyday 
Purpose:
 ******************************/
void loadBookName(void);

int main( int argc, char* argv[]){

loadBookName();

	return 0;
}

// make function  that loads 
void loadBookName ( void){
	char comma = ',';
// File Pointer	
FILE * fp;

// Array to hold author Names
char token;
char author[55];
char name[55];
//loop control variable 
int i = 0;
int j = 0;
// open file
fp = fopen("books.txt", "r");
if(fp==NULL)
{
	printf("Error");
	exit(-1);
}


// reads through file and prints consectutive charaters
while(fscanf(fp,"%c",&token)!=EOF)
{	
	if (token == comma)
	{
		token = NULL;
		printf("\n");

	}
	
	printf("%c",token);
	
}


fclose(fp);
}
