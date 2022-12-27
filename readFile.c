#include<stdio.h>
#define BLU "\x1B[34m"
#define RED "\x1B[31m"

int main(int argc, char *argv[]){
	if (argv[1]){
		int lines;
		printf("Lines to read : ");
		scanf("%d", &lines);
		
		printf(RED);
		char data[255];
		printf("\nOpening file: %s\n\n", argv[1]);
		FILE * pFile = fopen(argv[1], "r");
		
		printf(BLU);
		for (;lines>0;lines--)
		{
			fgets(data, 255, pFile);	
			printf("%s", data);
		}
		}
	else{
		printf("Usage: %s <filename>\n", argv[0]);
	}
	
}
