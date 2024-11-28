#include <stdio.h>


#define ROW 10
#define COL 10
int sum_of_row(int matrix[MAX_ROWS][MAX_COLS], int cols, int k);
int tinhtong();
int main() {
   
    int A[ROW][COL];
    int m, n,s;

   
    printf("Nhap so dong m (1 <= m <= %d): ", ROW);
    scanf("%d", &m);
    
    printf("Nhap so cot n (1 <= n <= %d): ", COL);
    scanf("%d", &n);

    
    if (m <= 0 || m > ROW) {
        printf("So dong m khong hop le. Moi nhap lai gia tri m trong pham vi tu 1 den %d.\n", ROW);
        return 1;
    }

    if (n <= 0 || n > COL) {
        printf("So cot n khong hop le. Moi nhap lai gia tri n trong pham vi tu 1 den %d.\n", COL);
        return 1;
    }

  
    printf("Nhap cac gia tri cho mang A[%d][%d]:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap gia tri cho A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nMang A[%d][%d] la:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
	
	
	printf("\nTong cac phan tu trong mang:%d",s);
    return 0;
}

int tinhtong()
{
	int A[ROW][COL];
	int m,n;
	int s=0,i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(A[i][j]==1)
				s+=A[i][j];
	return s;				
		
 
}
int sum_of_row(int matrix[MAX_ROWS][MAX_COLS], int cols, int k) {
    int sum = 0;
    
    
    if (k < 0 || k >= MAX_ROWS) {
        printf("Dong k khong hop le!\n");
        return -1;
    }
    
    
    for (int i = 0; i < cols; i++) {
        sum += matrix[k][i];
    }
    
    return sum;
}
int sum_of_column(int matrix[MAX_ROWS][MAX_COLS], int rows, int k) {
    int sum = 0;
    
   
    if (k < 0 || k >= MAX_COLS) {
        printf("Cot k không hop le!\n");
        return -1;
    }
    
   
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][k];
    }
    
    return sum;
}
int has_negative(int matrix[MAX_ROWS][MAX_COLS], int cols, int k) {
   
    if (k < 0 || k >= MAX_ROWS) {
        printf("Dòng k không h?p l?!\n");
        return -1;
    }
    
    
    for (int i = 0; i < cols; i++) {
        if (matrix[k][i] < 0) {
            return 1;  
    }
    
    return 0;  
}
int is_prime(int n) {
    if (n <= 1) {
        return 0;  
}
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

