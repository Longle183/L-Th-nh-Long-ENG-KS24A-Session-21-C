#include <stdio.h>
int main(){
    char sourceFile[] = "bt01.txt";
    char destFile[] = "bt06.txt";
    char line[256];
    FILE *source;
	source = fopen(sourceFile, "r");
    if (source == NULL) {
        perror("Khong the mo tep nguon");
        return 1;
    }
    FILE *dest = fopen(destFile, "w");
    if (dest == NULL){
        perror("Khong the mo tep dich");
        fclose(source);
        return 1;
    }
    while (fgets(line, sizeof(line), source) != NULL){
        fputs(line, dest);
    }
    fclose(source);
    fclose(dest);
    printf("Da sao chep noi dung tu tep %s sang tep %s thanh cong.\n", sourceFile, destFile);
    return 0;
}
