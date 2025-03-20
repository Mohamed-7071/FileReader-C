#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256]; 
    file = fopen("Tes CA.txt","r");


    if (file == NULL) {
        printf("Error: File not Found");
        exit(1);
    }

    
   while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

  

    return 0;

}