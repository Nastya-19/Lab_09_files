#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	FILE* fp;
	double prices[10000];
	int n = 0;
	
	fp = fopen("dj2008.txt", "r");	
	if(!fp) {
		printf("\nERROR!\n");
		return -1;
	}
	
	while(!feof(fp)) {
		fscanf(fp, "%lf\n", &prices[n]);
		printf("p[%d] = %lf\n", n, prices[n]);
		n++;
	}	
	
	fclose(fp);

	return 0;
}
