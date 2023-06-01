#include <stdio.h>
int isEvenNumber (int number);

int main() {
    int n, m;
    printf("Please, enter a number:\n");
    printf("+ n: ");
    scanf("%d", &n);
    printf("+ m: ");
    scanf("%d", &m);
    printf("The even number between %d and %d\n", n, m);
    for (int a = n + 1; a < m; a++) {
        if (isEvenNumber(a) == 1)
        printf("%d\n", a);
    }
    return 0;
}
int isEvenNumber (int number){
    if (number % 2 == 0)
        return 1;
    else
        return 0;
}
