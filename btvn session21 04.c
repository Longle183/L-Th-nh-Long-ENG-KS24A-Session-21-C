#include <stdio.h>
int main(){
    char line[20];
    FILE *fptr;
	fptr= fopen("bt01.txt","r");
    if (fptr == NULL){
        perror("Khong the mo tep");
        return 1;
    }
    if (fgets(line, sizeof(line), fptr) != NULL) {
        printf("Dong dau tien trong tep: %s", line);
    } else {
        printf("Tep rong hoac khong the doc duoc\n");
    }
    fclose(fptr);
    return 0;
}
