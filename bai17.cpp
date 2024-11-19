#include <stdio.h>

void inSNTnhoHonN(int n);
int tongSNTnhoHonN(int n);
int tbtongSNTnhoHonN(float n);
int songto(int n);
void inra(int n);
void inra1(int n);
void inra2(int n);
void inra3(int n);
void inra4(int n);
void inra5(float n);

int main(){
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);
    

    inSNTnhoHonN(n);
    

    int tong = tongSNTnhoHonN(n); 
    printf("Tong cac so nguyen to nho hon %d la: %d\n", n, tong);
    float tbtong = tbtongSNTnhoHonN(n); 
    printf("Trung binh tong cac so nguyen to nho hon %.0f la: %.2f\n", n, tbtong);

    inra(n);
    inra1(n);
    inra2(n);
    inra3(n);
    inra4(n);
    inra5(n);

    return 0;
}

////////////////////////////////////////////////////
void inra(int n) {
    printf("\nCac so tu 1 den %d: ", n);
    for(int a = 1; a <= n; a++) {
        printf("%d ", a);
    }
    printf("\n");
}

////////////////////////////////////////////////////
void inra1(int n) {
    printf("\nCac so chan tu 0 den %d: ", n);
    for(int a = 0; a <= n; a = a + 2) {
        printf("%d ", a);
    }
    printf("\n");
}

////////////////////////////////////////////////////
void inra2(int n) {
    printf("\nCac so chia het cho 5 tu 1 den %d: ", n);
    for(int a = 1; a <= n; a++) {
        if (a % 5 == 0) {
            printf("%d ", a);
        }
    }
    printf("\n");
}

////////////////////////////////////////////////////
int songto(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void inSNTnhoHonN(int n) {
    printf("Cac so nguyen to nho hon %d la: \n", n);
    for (int i = 2; i < n; i++) {
        if (songto(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int tongSNTnhoHonN(int n) {
    int tong = 0; 
    for (int i = 2; i < n; i++) {
        if (songto(i)) {
            tong += i;  
        }
    }
    return tong;
}

int tbtongSNTnhoHonN(float n) {
    float tong = 0; 
    for (float i = 2; i < n; i++) {
        if (songto(i)) {
            tong += i;  
        }
    }
    tong = tong/n;
    return tong;
}

////////////////////////////////////////////////////
void inra3(int n) {
    int s = 0;
    printf("\nTong cac so tu 0 den %d la: ", n);
    for(int a = 0; a <= n; a++) {
        s = s + a;
    }
    printf("%d\n", s);    
}

////////////////////////////////////////////////////
void inra4(int n) {
    int s = 0;
    printf("\nTong cac so le tu 1 den %d la: ", n);
    for(int a = 1; a <= n; a = a + 2) {
        s = s + a;
    }
    printf("%d\n", s);
}
////////////////////////////////////////////////////
void inra5(float n) {
     float s = 0;
    printf("\nTong cac so le tu 1 den %d la: ", n);
    for(float a = 1; a <= n; a = a + 2) {
        s = s + a;
    }
    s=s/n;
    printf("%.2f\n", s);
}
////////////////////////////////////////////////////?10:06/-strong/-heart:>:o:-((:-h Xem tru?c khi g?iTh? Files vào dây d? xem l?i tru?c khi g?i
