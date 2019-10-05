#include<stdio.h>
#include<stdlib.h>
//永远记住"wb""rb"只能搭配fread和fwrite使用
typedef struct people
{
	char name[20];
	int age;
	char sex;

}Data; 
int main()
{
	 
	FILE *wp = NULL;
	FILE *rp = NULL;
	Data t = { "zhangsan",5,'m' };
	wp = fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "w");
	if (NULL == wp)
	{
		printf("打开错误\n");
		return  0;
	}
	rp= fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "rb");
	if (NULL == rp)
	{
		printf("打开错误\n");
		return 0;
	}
	/*fwrite(&t, sizeof(Data),1, wp);
	fread(&t, sizeof(Data), 1, rp);*/
	//printf("%s,%d,%c\n", t.name, t.age, t.sex);
	/*fprintf(wp, "%s,%d,%c", t.name, t.age, t.sex);*/
	fprintf(wp, "%s，%d，%c", t.name, t.age, t.sex);
	fclose(wp);
	wp = NULL;
	fclose(rp);
	rp = NULL;
	system("pause");
	return 0;
}