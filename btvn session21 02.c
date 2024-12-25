#include<stdio.h>
int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","w");
	char myText[50];
	fgets(myText,50,fptr);
	printf("Thong tin trong file text %s",myText);
	fclose(fptr);
	return 0;
}
