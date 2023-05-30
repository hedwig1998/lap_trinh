#include <stdio.h>
int S_chu_nhat(int c_dai, int c_rong);
int D_chu_nhat(int d_dai, int d_rong);

int main() {
    int a, b, option;
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &a);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &b);
    do{
        printf("\nBan muon tinh gi:");
        printf("\n1. Dien tich");
        printf("\n2. Chu vi");
        printf("\n3.Thoat chuong trinh");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &option);
        switch (option){
            case 1:
                S_chu_nhat(a, b);
                break;
            case 2:
                D_chu_nhat(a, b);
                break;
        }
    }while (option != 3);
    printf("Ban da thoat");
    return 0;
}

int S_chu_nhat(int s_dai, int s_rong){
    int S = s_dai * s_rong;
    printf("Dien tich hinh chu nhat la: %d\n", S);
    return S;
}

int D_chu_nhat(int d_dai, int d_rong){
    int D = (d_dai + d_rong) * 2;
    printf("Chu vi hinh chu nhat la: %d\n", D);
    return D;
}
