#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m" 
#define RED     "\033[31m"  
#define GREEN   "\033[32m" 



int valid(void) {
    char targetPath[5000];
    int count = 0;

    for (int i = 1; i < 255; i++) {
        char comName[20];
        char basecom[] = "COM1";
        snprintf(comName, sizeof(comName), "COM%d", i);


        DWORD queryResult = QueryDosDeviceA(comName, targetPath, sizeof(targetPath));
       


        printf(RED "ERROR!!");
    }
}

int check(void) {
    char targetPath[5000];
    int count = 0;

    for (int i = 1; i < 255; i++) {
        char comName[20];
        char basecom[] = "COM1";
        char espcom[] = "COM1";
        snprintf(comName, sizeof(comName), "COM%d", i);


        DWORD queryResult = QueryDosDeviceA(comName, targetPath, sizeof(targetPath));
        if (strcmp(comName, basecom) == 0) {
            printf("Checking Esp32...... \n");
            Sleep(1000);
#define x true
        }


        if (strcmp(comName, espcom) == 0) {
            printf(GREEN "➢ ESP Connected On port : %s\n" RESET, comName);
      
            if (strcmp(comName, espcom) != 0) {
                printf("brooo");
            }

        }
       
    }
}

int main(void) {
    char key[10];
    char com[] = "COM9";
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
    printf("Enter your ESP Port: ");
    scanf_s("%9s", key, (unsigned int)sizeof(key));
    if (strcmp(key, com) == 0) {
        check();
    }
    else {
#ifdef _WIN32
        Sleep(500);
#endif
        printf(RED "ERROR NO COM FOUND \n" RESET);
    }
    printf(GREEN"", key);
    printf(RESET);
    printf("");
    scanf_s("%d", &key);
    system("pause");


}
