#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Windows Shutdown Program\n");
    printf("1. Shutdown\n");
    printf("2. Restart\n");
    printf("3. Logoff\n");
    printf("4. Abort\n");
    
    int choice;
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            system("shutdown /s /t 0");  // Shutdown immediately
            break;
        case 2:
            system("shutdown /r /t 0");  // Restart immediately
            break;
        case 3:
            system("shutdown /l");      // Logoff
            break;
        case 4:
            printf("Shutdown aborted.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
