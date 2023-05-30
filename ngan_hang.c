#include <stdio.h>
float soDu = 1000;
float bienDong;
int option;
void menu(){
    printf("Chao mung ban den voi ngan hang\n");
    printf("-------------------------------\n");
    printf("1. Kiem tra so du\n");
    printf("2. Rut tien\n");
    printf("3. Gui tien\n");
    printf("4. Thoat\n");
    printf("-------------------------------\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &option);
}

float deposit(){
    printf("So du cua ban la: %.1f\n", soDu);
    return soDu;
}

float rut_tien(){
    printf("Nhap so tien ban muon rut: ");
    scanf("%f", &bienDong);
    if (soDu >= bienDong){
        soDu -= bienDong;
        printf("Tai khoan hien tai cua ban la: %.1f\n", soDu);
    }
    else
        printf("Tai khoan cua ban khong du tien\n");
    return soDu;
}

float gui_tien(){
    printf("Nhap so tien ban muon gui: ");
    scanf("%f", &bienDong);
    soDu += bienDong;
    printf("tai khoan cua ban hien tai la: %.1f\n", soDu);
    return soDu;
}

void out(){
    printf("Ban da thoat\n");
}

int main() {
    do{
        menu();
        switch (option) {
            case 1:
                deposit();
                break;
            case 2:
                rut_tien();
                break;
            case 3:
                gui_tien();
                break;
        }
    }while (option != 4);
        out();
    return 0;
}
