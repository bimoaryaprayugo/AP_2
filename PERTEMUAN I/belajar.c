#include <stdio.h> //header standar untuk C
#include <conio.h>

int main () {
    char nama [50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello Word\n"); // printf -> untuk fungsi output pada c

    printf ("Masukkan Nama: ");
    gets(nama); // gets -> get string

    printf("Masukkan NIM: ");
    scanf("%d",&nim);

    getchar();

    printf("Masukkan KOM: ");
    gets(kom);

    printf("Masukkan IP: ");
    scanf("%f",&ip);

    printf("\n");

    /*untuk menampilkan output*/
    printf("Nama: ");
    puts(nama); // put string; untuk string dalam bentuk array

    printf("NIM: %d\n", nim);

    printf("KOM: ");
    puts(kom);

    printf("IP: %.2f\n", ip);

    printf("press any button to continue...."); 
    getch();

}