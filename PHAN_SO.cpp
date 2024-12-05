#include<string.h>
#include<stdio.h>
#include<math.h>
struct PHAN_SO{
	float mauso, tuso;
};

typedef struct PHAN_SO PS;
void nhap(PS *a);
float rutron(PS *a);
void xuat(PS a);
int main(){
	PHAN_SO a, b;
	nhap(&a);
	nhap(&b);
	printf("\nPhan so vua nhap: ");
	xuat(a);
	xuat(b);
	rutron(&a);
	rutron(&b);
	printf("\nPhan so vua rut gon: ");
	xuat(a);
	xuat(b);
	
	float tong = 0, tru = 0, nhan = 0, chia =0, phansoa = 0, phansob = 0;
	phansoa = a.mauso/a.tuso;
	phansob = b.mauso/b.tuso;
	printf("\nTong 2 phan so: ");
	tong = phansoa + phansob;
	printf("%.2f", tong);
	printf("\nTru 2 nphan so: ");
	tru = phansoa - phansob;
	printf("%.2f", tru);
	printf("\nNhan 2 phan so: ");
	nhan = phansoa * phansob;
	printf("%.2f", nhan);
	printf("\nChia 2 phan so: ");
	chia = phansoa / phansob;
	printf("%.2f", chia);
	
	return 0;
}



void nhap(PS *a){
	printf("Nhap vao phan so: \n");
	scanf("%f", &a->mauso);
	scanf("%f", &a->tuso);
}

void xuat(PS a){
	printf("\n%.0f_\n%.0f\n",a.mauso, a.tuso);
}

float rutron(PS *a) {
    float min = fmin(a->tuso, a->mauso);
    for (int i = min; i > 0; i--) {
        if ((int)a->tuso % i == 0 && (int)a->mauso % i == 0) {
            a->tuso /= i;
            a->mauso /= i;
            break;
        }
    }
}


