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
	//	printf("�򿪴���\n");
	//	return 0;
	//}
	//wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "a");
	//if (NULL == wp)
	//{
	//	printf("�򿪴���\n");//����������ʱ�洢������������ϵͳ�ٴӻ�������ȡ���س��ǻ���
	//	return 0;
	//}
	//while ((c = fgetc(rp)) != EOF)//���꽫ָ�����
	//{
	//	putchar(c);
	//	fputc(c, wp);//д��һ��ָ����һ��
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
	//	printf("�򿪴���\n");
	//	return 0;
	//}
	//if (NULL == wp)
	//{
	//	printf("�򿪴���\n");
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
	//fgets(buf, a+1, rp);//����ֻ�����ĸ�Ҫ��ȡ������ַ���(�������Ŀ��ַ�)��ͨ����ʹ����Ϊstr���ݵ����鳤�ȡ�
	// 
	//fputs(buf, wp);//���Һ�puts���������puts����ն���dos��fputs����ն���һ���ļ�
	//puts(buf);
	//fclose(rp);
	//rp = NULL;
	//fclose(wp);
	//wp = NULL;
	//free(buf);//�ͷ�ֻҪ���������ռ����
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
		printf("�򿪴���\n");
		return 0;
	}
	if (NULL == wp)
	{
		printf("�򿪴���\n");
		return 0;
	}
	/*scanf("%2d%3d%1d", &a, &b, &c);
	printf("a=%2d,b=%3d,c=%1d", a, b, c);*/
	fscanf(rp,"%2d%3d%1d", &a, &b, &c);
	/* �������Ҫ */
	//fprintf(wp,"a=%2d,b=%3d,c=%1d", a, b, c);
	fprintf(wp, "you are beautiful");
	fclose(rp);
	rp = NULL;
	fclose(wp);
	wp = NULL;
	system("pause");
	return 0;
}