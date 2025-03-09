#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Faktöriyel hesaplayan fonksiyon
int faktoriyel(int n) {
    if (n == 0 || n == 1)
        return 1;
    int sonuc = 1;
    for (int i = 2; i <= n; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    int x, y, s;
    printf("(x+y)^s acilimi: \n");
    printf("x degerinin y degerinden buyuk olmasina dikkat ediniz.\n");
    printf("x degerini giriniz: ");
    scanf("%d", &x);
    printf("y degerini giriniz: ");
    scanf("%d", &y);

    if (y > x || y < 0) {
        printf("Gecersiz giris! \n");
        return 1;
    }
    
    printf("s degerini giriniz : ");
    scanf("%d", &s);
    
    int islem = faktoriyel(y) * faktoriyel(x - y); // k! * (n - k)!
    int sonuc = faktoriyel(x) / islem; // n! / (k! * (n - k)!)

    printf("Sonuc: %d\n", sonuc);

    return 0;
}