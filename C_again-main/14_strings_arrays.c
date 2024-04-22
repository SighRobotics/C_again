#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    char mystring[] = "Hello World.";
    printf("%c\n\n",mystring[0]);

    printf("String is: %s\n",mystring);
    mystring[11] = '!';
    printf("String is: %s\n",mystring);

    int i = 0;
    while(mystring[i] != '\0'){//end of string is '\0' means NULL
        printf("%c",mystring[i++]);
    }printf("\n");

    i = 0;
    mystring[3] = '\0';//we manually added end of string symbol
    while(mystring[i] != '\0'){
        printf("%c",mystring[i++]);
    }printf("\n");
    //printing will stop at 3
    //the rest of the string still exists, we have just redefined one of the values


    char mynewstring[] = "Copy this string baby!";
    printf("Original string is: %s\n",mynewstring);
    i = 0;
    char copy_string[100];//have to give enough space
    printf("String copied is: %s\n",copy_string);
    while(mynewstring[i] != '\0'){
        copy_string[i] = mynewstring[i];
        ++i;
        printf("String copied is: %s\n",copy_string);
    }printf("String copied is: %s\n",copy_string);
    //string is now copied, we can however use some commands instead for a better time

    //i is counting the length of the string

    char str1[] = "Happy Coding!";
    printf("str1: %s\n",str1);
    char* str3 = calloc(i,sizeof(char));//see man malloc, calloc etc for more info
    strncpy(str3,str1,i);
    //strcpy is not good cause new string may have less space than original string
    //strncpy(destination string,source string,string length)
    printf("str3: %s\n",str3);
    free(str3);

    char *s1 = "Good morning, I am duplicated using strdup.";
    char *s2 = strdup(s1);//direcly duplicates a sting and reserves the correct amount of malloc'd space
    printf("%s\n",s2);
    free(s2);

    return 0;
}