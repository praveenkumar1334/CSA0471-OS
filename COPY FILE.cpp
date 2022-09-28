#include <stdio.h>
int main()
{
	int ch;
	FILE *fp,*fq;
	fp=fopen("vv.txt","r");
	fq=fopen("vvr.txt","w");
	if (fp==NULL||fq==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			fputc(ch,fq);
		}
		printf("FILE COPIED SUCCESSFULLY");
	}
	return 0;
}