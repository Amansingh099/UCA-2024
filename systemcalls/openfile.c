#include<stdio.h>
#include<stdlib.h>

void copyfiles(){
	
 
        //Declaring variables
	FILE* source,*destination;

	//User Friendly prompts
	printf("Enter the Name of Source File :- ");
	
	char name[10000];
        
        scanf("\n%[^\n]%*c",name);
        
	source = fopen(name,"r");

	// if File doesn't Exists
	if(source==NULL){
	
              printf("Error File Not Found \n");
	      return;
	}

	//If file exists
	printf("\nEnter The Name of Destination File name:- ");
	scanf("\n%[^\n]%*c",name);

	//Creating a file pointer for Destination File
	destination = fopen(name,"w");

	//copying the file
	char ch;

	while((ch=fgetc(source))!=EOF){
	     fputc(ch,destination);	
	}

	//closing Both the file pointers
        fclose(source);
	fclose(destination);

	printf("\nFile Copying Successfull\n");
	printf("\nName of the Copied File :- %s\n",name);
}
int main(){
	copyfiles();
	return 0;
};
