//#include<stdio.h>
//#include<stdlib.h>
////��ͬһ���ļ��Ķ�д����
////fseek,ftell
////
//int main()
//{
//	//char* buf=NULL;
//	//FILE *wp = NULL;
//	//FILE *rp = NULL;
//	//int a = 20;
//	////char str[20] = "1";
//	//wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "wb");
//	//if (NULL == wp)
//	//{
//	//	printf("�򿪴���\n");
//	//}
//	//rp= fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "rb");
//	//if (NULL == rp)
//	//{
//	//	printf("�򿪴���\n");
//	//}
//	///*wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "rb+");
//	//if (NULL == wp)
//	//{
//	//	printf("�򿪴���\n");
//	//}*/
//	////fread(&buf, 4, 1, rp);//��rbƥ�䣬����ֵ��ʾ��ȷ��ȡ�Ĵ���
//	////fwrite(&buf, 4, 1, wp);//��wbƥ��
//	////rewind(wp);
//	//fseek(rp, 0, 2);
//	//a=ftell(rp);
//	//rewind(rp);
//	//printf("%d", a);
//	//buf = (char*)malloc(a + 1);
//	//fread(buf, a, 1, rp);
//	//fwrite(buf, a, 1, wp);
//	//fclose(wp);
//	//wp = NULL;
//	//fclose(rp);
//	//rp = NULL;
//	//free(buf);
//	//buf = NULL;
//	FILE *rp = NULL;
//	rp = fopen("C:\\Users\\Z7M\\Desktop\\4.txt", "rb");
//	if (!rp)
//	{
//		perror("fail");//�ж��Ǵ�ʧ�ܻ��Ƕ����м�ʧ��
//	}
//	else if (feof(rp))//�ж��ǲ�����Ϊ�����ļ�β������
//		puts("End of file reached successfully");
//	system("pause");
//	return 0;
//}