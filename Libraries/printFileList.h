#include <stdlib.h>
#include <stdio.h>

void printFileList(char* path  ){
        FILE* file =  fopen(path, "r"); 
        char currentLine[10]; 

        while (  fscanf(  file, "%s", currentLine ) != EOF  ) 
        {
                printf("line: %s\n",currentLine ); 
        } 
        fclose(file); 
}