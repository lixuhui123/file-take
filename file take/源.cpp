//#include<stdio.h>
//#include<stdlib.h>
////��ͬһ���ļ��Ķ�д���������Ǵ��ⲿ�ļ��������ж���д�ǴӴ��������ⲿ�ļ���д
//int main()
//{
//	int a = 1;
//	FILE *wp = NULL;
//	FILE *rp = NULL;
//	int b = 20;
//	//char str[20] = "1";
//	wp = fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "wb");
//	if (NULL == wp)
//	{
//		printf("�򿪴���\n");
//	}
//	rp= fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "rb");
//	if (NULL == rp)
//	{
//		printf("�򿪴���\n");
//	}
//	/*wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "rb+");
//	if (NULL == wp)
//	{
//		printf("�򿪴���\n");
//	}*/
//	fwrite(&a, 4, 1, wp);
//	rewind(wp);//Ӧ��ע���ļ�ָ���ָ��λ�ã�
//	fread(&b, 4, 1, rp);//��ͬһ���ļ��Ķ�
//	//puts(str);
//	printf("%d", b);
//	fclose(wp);
//	wp = NULL;
//	fclose(rp);
//	rp = NULL;
//	system("pause");
//	return 0;
//}