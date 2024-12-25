#include<stdio.h>
int main(){
	char inputString[100];
	printf("Nhap chuoi ban muon them vao tep");
	fgets(inputString,sizeof(inputString),stdin);
	FILE *fptr;
	fptr= fopen("bt01.txt","a");
	fprintf("bt01.txt","%s",inputString);
	fclose(fptr);
	return 0;
}
