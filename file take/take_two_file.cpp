#include<stdio.h>
#include<stdlib.h>
//对两个个文件的读写操作，读是从外部文件往磁盘中读，写是从磁盘中往外部文件中写
//未完
int main()
{
	int a = 1;
	FILE *wp = NULL;
	FILE *rp = NULL;
	int b = 20;
	//char str[20] = "1";
	wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "wb");
	if (NULL == wp)
	{
		printf("打开错误\n");
		return;
	}
	rp= fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "rb");
	if (NULL == rp)
	{
		printf("打开错误\n");
		return;
	}
	/*wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "rb+");
	if (NULL == wp)
	{
		printf("打开错误\n");
	}*/
	fwrite(&a, 4, 1, wp);
	rewind(wp);//应该注意文件指针的指向位置；
	fread(&b, 4, 1, rp);//对同一个文件的读写
	//puts(str);
	printf("%d", b);
	fclose(wp);
	wp = NULL;
	fclose(rp);
	rp = NULL;
	system("pause");
	return 0;
}