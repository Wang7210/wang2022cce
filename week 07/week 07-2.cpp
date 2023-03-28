#include <stdio.h>
int main()
{
    FILE*fin=fopen("file.txt","r");
    char line[200];
    fscanf(fin,"%s",line);
    printf("現在執行目錄的檔案理讀入 %s\n",line);
    fscanf(fin,"%s",line);
    printf("現在執行目錄的檔案理讀入 %s\n",line);
}
