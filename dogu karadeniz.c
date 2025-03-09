#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 100
int main() {
	FILE* file = fopen("trafikkodlari.txt", "r");
	if (file == NULL) {
		printf("Dosya acilamadi\n");
		return 1;
	}
    char sehir[MAX_LINE];
    int kod[10];
    int girilen_kod[10];
    int found = 0;

    printf("Trafik kodunu giriniz: ");
    scanf("%d", girilen_kod);

    while (fscanf(file, "%d %[^\n]", kod, sehir) != EOF) {
        if (strcmp(kod, girilen_kod) == 0) {
            printf("%s Dogu Karadeniz bolgesinde yer alir.\n", sehir);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Bu sehir Dogu Karadeniz bolgesinde bulunamadi\n");
    }

    fclose(file);
    return 0;
}
