#include<stdio.h>
int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","w");
	fprintf(fptr,"Hello");
	fclose(fptr);
	return 0;
}
