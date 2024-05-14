//Bai1
#include <stdio.h>

void BoiSoCua7Co2ChuSo()
{
    int a;
    for(a=10; a<= 99; a++)
    {
        if(a%7==0)
        {
            printf("%d \t",a);
        }
    }
}
int main(void)
{
    printf("cac so nguyen co 2 chu so va la boi so cua 7 la: \n");
    BoiSoCua7Co2ChuSo();
    return 0;
    
}
