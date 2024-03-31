#include <stdio.h>            
#include <locale.h>

int main(void)                     
{
    //Задание 1
    setlocale(LC_ALL, "Rus");
    printf("Hello world!\n"); 
    printf("Привет Саша!\n"); 

    printf("\n\n");

    //Задание 2
    printf("Вариант1\n");
    printf("Let's\n");
    printf("\tgo\n");
    printf("\t\tto\n");
    printf("\t\t\twork\n");

    printf("Вариант2\n");
    printf("Let's\n");
    printf(" go\n");
    printf("  to\n");
    printf("   work\n");

    printf("\n\n");

    //Задание 3
    char arr[6][7] = { {' ',' ',' ','*',' ',' ',' '},
                        {' ',' ','*','*','*',' ',' '},
                        {' ','*','*','*','*','*',' '},
                        {'*','*','*','*','*','*','*'},
                        {' ','H','H',' ','H','H',' '},
                        {' ','Z','Z','Z','Z','Z',' '} };
    int i, j;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //Задание 4
    char str[4] = {'\\','_','/',' '};
    int k,a=18, b=18;
    
    for (k = 0; k < a; k++) {
        for (i = 0; i < b; i++) {
            for (j = 0; j < 4; j++) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
        printf("  ");
        for (i = 0; i < b; i++) {
            for (j = 0; j < 4; j++) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    
  
    

    return 0;                       
}