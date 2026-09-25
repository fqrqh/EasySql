
#include <stdio.h>

#define GREEN   "\033[32m"
#define RESET   "\033[0m"

int main() {
    char name[] = "User"; 

    printf("%sHello %s!\n%s", GREEN, name, RESET);

    return 0;
}
