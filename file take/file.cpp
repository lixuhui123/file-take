#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1000;
	FILE *fp = NULL;
	fp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "wb");
	fwrite(&a, 4, 1, fp);
	fread()
	fclose(fp);
	fp = NULL;
	system("pause");
	return 0;
}