#include <stdio.h>

/* x が素数なら 1、そうでなければ 0 を返す */
int is_prime(int x)
{
    int i;

    /* 1 以下は素数ではない */
    if (x < 2) {
        return 0;
    }

    /* 2 から √x まで割ってみる */
    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    int i;
    int count = 0;

    scanf("%d", &n);

    /* 10000 より大きいときは NG */
    if (n > 10000) {
        printf("NG\n");
        return 0;
    }

    /* 1 から n までを順に調べる */
    for (i = 1; i <= n; i++) {
        if (is_prime(i)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}