#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    setlocale(LC_ALL, "rus");
    printf("Параметров : %d \n",argc );
    for (int i = 0; i < argc; ++i) {
        printf("%15d%c%2llu%c \n", i,'[',strlen(argv[i]),']');
    }
    system("pause");
    return 0;
}