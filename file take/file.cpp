//#include<stdio.h>
//#include<stdlib.h>
////对同一个文件的读写操作
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
//	//	printf("打开错误\n");
//	//}
//	//rp= fopen("C:\\Users\\Z7M\\Desktop\\1.txt", "rb");
//	//if (NULL == rp)
//	//{
//	//	printf("打开错误\n");
//	//}
//	///*wp = fopen("C:\\Users\\Z7M\\Desktop\\2.txt", "rb+");
//	//if (NULL == wp)
//	//{
//	//	printf("打开错误\n");
//	//}*/
//	////fread(&buf, 4, 1, rp);//与rb匹配，返回值表示正确读取的次数
//	////fwrite(&buf, 4, 1, wp);//与wb匹配
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
//		perror("fail");//判断是打开失败还是读到中间失败
//	}
//	else if (feof(rp))//判断是不是因为读到文件尾而结束
//		puts("End of file reached successfully");
//	system("pause");
//	return 0;
//}