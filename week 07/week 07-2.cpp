#include <stdio.h>
int main()
{
    FILE*fin=fopen("file.txt","r");
    char line[200];
    fscanf(fin,"%s",line);
    printf("�{�b����ؿ����ɮײzŪ�J %s\n",line);
    fscanf(fin,"%s",line);
    printf("�{�b����ؿ����ɮײzŪ�J %s\n",line);
}
