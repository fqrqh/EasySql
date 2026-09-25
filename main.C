#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m" 
#define RED     "\033[31m"  
#define GREEN   "\033[32m"  

int check(void) {
    char targetPath[5000];
    int count = 0;

    for (int i = 1; i < 255; i++) {
        char comName[20];
        char basecom[] = "COM1";
        snprintf(comName, sizeof(comName), "COM%d", i);


        DWORD queryResult = QueryDosDeviceA(comName, targetPath, sizeof(targetPath));
        if (strcmp(comName, basecom) == 0) {
            printf("➣ COM1 Logged\n");
#define x true
        }


        if (queryResult != 0) {
            printf(GREEN "➢ ESP Connected On port : %s\n" RESET, comName);
            count++;
        }
    }
}

int main(void) {
    int key;
#define x = false;
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); 
#endif
    printf(" ▄▄▄·      ▄▄▄  ▄▄▄▄▄\n"
        "▐█ ▄█▪     ▀▄ █·•██\n"
        "██▀· ▄█▀▄ ▐▀▀▄  ▐█.▪\n"
        "▐█▪·•▐█▌.▐▌▐█•█▌ ▐█▌·\n"
        ".▀    ▀█▄▀▪.▀  ▀ ▀▀▀ \n");
    printf(GREEN"[https://github.com/fqrqh/portscanner]" "\n"), RESET;
    printf(RESET);
    printf("Enter a Key to scan: ");
    scanf_s("%d", &key);
    printf(GREEN"", key);
    printf(RESET);
    check();
    printf("");
    scanf_s("%d", &key);
    system("pause");


}
