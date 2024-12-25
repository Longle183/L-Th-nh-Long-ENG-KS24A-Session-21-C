#include <stdio.h>
int main(){
    char fileName[] = "bt05.txt";
    int numLines;
    printf("Nhap so dong ban muon ghi vao tep: ");
    scanf("%d", &numLines);
    getchar();
    FILE *file;
	file = fopen(fileName, "w");
    if (file == NULL){
        perror("Khong the mo tep");
        return 1;
    }
    for (int i = 0; i < numLines; i++){
        char line[256];
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen(fileName, "r");
    if (file == NULL) {
        perror("Khong the mo tep");
        return 1;
    }
    printf("\nNoi dung trong tep %s:\n", fileName);
    char line[256];
    while (fgets(line, sizeof(line), file) != NULL){
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

