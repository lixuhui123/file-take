#include<stdio.h>
#include<stdlib.h>
int main()
{
	//char c;
	//FILE *wp = NULL;
	//FILE *rp = NULL;
	//
	//rp= fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "r");
	//if (NULL == rp)
	//{
	//	printf("打开错误\n");
	//	return 0;
	//}
	//wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "a");
	//if (NULL == wp)
	//{
	//	printf("打开错误\n");//数据首先暂时存储到缓冲区操作系统再从缓冲区读取。回车是换行
	//	return 0;
	//}
	//while ((c = fgetc(rp)) != EOF)//读完将指针后移
	//{
	//	putchar(c);
	//	fputc(c, wp);//写完一个指针移一个
	//}
	//fclose(rp);
	//rp = NULL;
	//fclose(wp);
	//wp = NULL;


	//char *buf=NULL;
	//FILE *rp = NULL;
	//FILE *wp = NULL;
	//int a = 0;

	//rp = fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "r");
	//wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "w");
	//if (NULL == rp)
	//{
	//	printf("打开错误\n");
	//	return 0;
	//}
	//if (NULL == wp)
	//{
	//	printf("打开错误\n");
	//	return 0;
	//}
	//while (fgetc(rp) != EOF)
	//{
	//	a++;
	//}
	//
	////printf("%d", a);
	//rewind(rp);
	// 
	//buf = (char*)malloc(a + 2);
	//if (buf == NULL)
	//{
	//	return 0;
	//}
	//fgets(buf, a+1, rp);//向左只读了四个要读取的最大字符数(包括最后的空字符)。通常，使用作为str传递的数组长度。
	// 
	//fputs(buf, wp);//向右和puts的区别就是puts输出终端是dos而fputs输出终端是一个文件
	//puts(buf);
	//fclose(rp);
	//rp = NULL;
	//fclose(wp);
	//wp = NULL;
	//free(buf);//释放只要不超出这块空间就行
	//buf = NULL;

	//fscanf fprintf
	//int fscanf(FILE * stream, const char * format, ...);
	//int  scanf ( const char * format, ... );  
	int a, b, c;
	FILE *rp = NULL;
	FILE *wp = NULL;

	rp = fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "r");
	wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "w");
	if (NULL == rp)
	{
		printf("打开错误\n");
		return 0;
	}
	if (NULL == wp)
	{
		printf("打开错误\n");
		return 0;
	}
	/*scanf("%2d%3d%1d", &a, &b, &c);
	printf("a=%2d,b=%3d,c=%1d", a, b, c);*/
	fscanf(rp,"%2d%3d%1d", &a, &b, &c);
	/* 这个很重要 */
	//fprintf(wp,"a=%2d,b=%3d,c=%1d", a, b, c);
	fprintf(wp, "you are beautiful");
	fclose(rp);
	rp = NULL;
	fclose(wp);
	wp = NULL;
	system("pause");
	return 0;
}