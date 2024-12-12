#include <stdio.h>
main()
{
	int a[3];
	a[0]=10;
	 a[1]=20;
	 a[2]=30;
	int m=3,i;
	FILE *fp;
	char path[50];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(path);
	fp=fopen(path,"wt");
	if(fp==NULL)
	{
		printf("\nLoi mo flie" );
	}
	else
	{
		fprintf(fp,"%d\n",m);
	}
	for(i=0;i<m;i++)
	{
	fprintf(fp,"%3d",a[i]);
	fprintf(fp,"\n");
	}
	fclose(fp);
return 0;
}
