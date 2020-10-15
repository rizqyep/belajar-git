#include <stdio.h>
#include <string.h>

int main(){

    char nama[20];

    printf("Masukkan nama :");
    fgets(nama, 20, stdin);
    strtok(nama, "\n");
    printf("Halo %s", nama);
    return 0;
    
}