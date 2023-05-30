#include <stdio.h>

void rank(int i[], int y);

int main() {
    int score [10];
    for (int a = 0; a < 10; a++){
        printf("Diem cua sinh vien %d la: ", a + 1);
        scanf("%d", &score[a]);
    }
    rank(score, 10);
    return 0;
}

void rank(int i[], int y){
    int x;
    for (x = 0; x < y; x++){
        if (i[x] >= 90)
            printf("Sinh vien %d xep loai A\n", x + 1);
        else if (i[x] >= 80)
            printf("Sinh vien %d xep loai B\n", x + 1);
        else if (i[x] >= 70)
            printf("Sinh vien %d xep loai C\n", x + 1);
        else if (i[x] >= 60)
            printf("Sinh vien %d xep loai D\n", x + 1);
        else
            printf("Sinh vien %d xep loai E\n", x + 1);
    }
}

