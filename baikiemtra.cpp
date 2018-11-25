#include<stdio.h>
#include<conio.h>
#include<string.h>
FILE *f;
char path[100];
int a[10],n;
void nhaptenfile()
	{
	printf("nhap ten file: ");
	gets(path);
	}
void docfile(char path[100])
	{
	f=fopen(path,"r");
	if(f==NULL) printf("\nKhong doc duoc file!");
		else
			{
			fscanf(f,"%d",&n);
			for(int i=0;i<n;i++)
						fscanf(f,"%d",&a[i]);
		        	fclose(f);
			}
	}
	/*
int tinhtong(int i)
{
	int s=0;
	for(int i=0; i<=n ;i++)
	  	for(int j=0;j<n;j++)
	{
		if(a[i][j]%2==0)
		  s=s+a[i][j];
		  else
		   tingtong(i+1);
	}
	return s;
}*/
int main()
	{
	nhaptenfile();
	docfile(path);
	for(int i=0;i<n;i++)
		{
			
			printf("%4d",a[i]);
		}
	//int tong=tingtong(i);
	//printf("\n  tong chan cua day laf %d ", tong);
	return 0;
	getch();
}
