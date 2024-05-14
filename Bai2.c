//Bai2
#include <stdio.h>
#include <math.h>

int SoChinhPhuong(int num) 
{
    int n = sqrt(num);
    return n * n == num;
}

void DemSoChinhPhuong(int a) 
{
    printf("Cac so chinh phuong nho hon %d la:\n", a);
    int count = 0;
    
    for (int i = a - 1; i > 0; i--) {
        if (SoChinhPhuong(i)) {
            printf("%d ", i);
            count++;
        }
    }
    
    printf("\nTong cong co %d so chinh phuong.\n", count);
}

int main() {
    int a;
    printf("Nhap vao so nguyen duong a: \n");
    scanf("%d", &a);
    
    DemSoChinhPhuong(a);
  
    return 0;
}
