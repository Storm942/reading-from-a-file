#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("hello.txt","r");
    
    char ch;
    
    fscanf(fptr,"%c",&ch);
    printf("Character=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character=%c\n",ch);
    fclose(fptr);
    return 0;
}

//ALTERNATIVE CODE

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fname("hello.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character=",ch);
    return 0;
}
