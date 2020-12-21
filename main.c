#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    tampilkanInfo();

    while (true) {
        printf("\nInputkan jenis operasi yang ingin anda lakukan : ");
        char input = getche();
        switch(input) {
            case '+':
                penjumlahan();
                break;

            case '-':
                pengurangan();
                break;

            case '*':
                perkalian();
                break;

            case '/':
                pembagian();
                break;

            case 'c':
            case 'C':
                system("cls");
                tampilkanInfo();
                break;

            case 'i':
            case 'I':
                printf("\n\n");
                tampilkanInfo();
                break;

            case 'e':
            case 'E':
                exit(0);
                break;

            default:
                printf("\nOperasi yang anda inputkan tidak valid!, Silakan tekan 'I' atau 'i' untuk menampilkan info\n");
                break;
        }
    }
    return 0;
}

void tampilkanInfo() {
    printf("********** Aplikasi Kalkulator Sederhana **********\n\n");
    printf("===== Tekan 'E' atau 'e' untuk keluar program =====\n");
    printf("========== Tekan 'C' atau 'c' untuk clear =========\n");
    printf("==== Tekan 'I' atau 'i' untuk menampilkan info ====\n\n");

    printf("Input simbol + untuk penjumlahan \n");
    printf("Input simbol - untuk pengurangan \n");
    printf("Input simbol * untuk perkalian \n");
    printf("Input simbol / untuk pembagian \n");
}

void penjumlahan() {
    int count;
    bool invalid_input = false;
    do {
        if (invalid_input) printf("Harap inputkan angka diatas 1!");
        printf("\nInputkan jumlah angka yang akan dijumlahkan : "); scanf("%i", &count);
        invalid_input = count <= 1;
    } while (invalid_input);

    int sum=0;
    for (int i=0; i <count; i++) {
        int val;
        printf("Inputkan angka ke-%i : ", i+1); scanf("%i", &val);
        sum+=val;
    }
    printf("Hasil penjumlahan adalah : %i\n", sum);
}

void pengurangan() {}

void perkalian() {}

void pembagian() {}
