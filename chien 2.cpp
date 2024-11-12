#include<stdio.h>
int main()
{
   //khai bao bien
   char mssv[10],hoten[50],lop[30];
   int namsinh;
   float diemxt[10];
  
  printf("nhap ho ten :\n ");
  fflush(stdin);
  gets(hoten);
  
  printf("nhap mssv : \n");
  fflush(stdin);
  scanf("%s",mssv);
  
  printf("nhap lop :\n");
  fflush(stdin);
  scanf("%s",lop);
  
  printf("nhap diem xt: \n");
  scanf("%d",&diemxt);
  
  printf("nhap nam sinh:\n");
  scanf("%d",&namsinh);
  //xuat thong tin
  printf("%s %s %s %d %d",mssv,lop,hoten,namsinh,diemxt);
  return 0;
  

}

