#include <stdio.h>

void menu();
float chonDo(char option);
float tinhTien();
void orderlist ();

const float p1 = 2.5, p2 = 3.0, p3 = 3.5;
int orderE = 0, orderC = 0, orderL = 0;
float total = 0;


int main() {
    char luaChon;
    do{
        menu();
        printf("Nhap lua chon cua ban: ");
        fflush(stdin);
        scanf("%c", &luaChon);
        chonDo(luaChon);
    }while (luaChon != 'd');
    printf("Ban da ket thuc lua chon\n");
    orderlist();
    tinhTien();
    return 0;
}

void menu(){
    printf("Chao mung ban den voi cua hang\n");
    printf("-------------------------------\n");
    printf("a. Espresso - $2.50\n");
    printf("b. Cappuccino - $3.00\n");
    printf("c. Latte - $3.50\n");
    printf("d. Quit\n");
    printf("-------------------------------\n");
}

float chonDo(char option){
        switch (option) {
            case 'a':
                total += p1;
                orderE += 1;
                printf("Ban da order %d Espresso\n", orderE);
                break;
            case 'b':
                total += p2;
                orderC += 1;
                printf("Ban da order %d Cappuccino\n", orderC);
                break;
            case 'c':
                total += p3;
                orderL += 1;
                printf("Ban da order %d Latte\n", orderL);
                break;
        }
        return total;
    }


void orderlist (){
    printf("Order cua ban la:\n");
    printf("------------------------------\n");
    printf("a. Espresso: %d\n", orderE);
    printf("b. Cappuccino: %d\n", orderC);
    printf("c. Latte: %d\n", orderL);
}

float tinhTien(){
    printf("Tong tien ban phai thanh toan la: $%.1f", total);
    return total;
}
