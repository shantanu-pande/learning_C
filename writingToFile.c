#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * pfile = fopen("Data.txt", "w");
	fprintf(pfile, "Hello");
	fclose(pfile);
	return 0;

}
