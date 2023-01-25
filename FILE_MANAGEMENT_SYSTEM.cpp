#include<stdio.h>
int main()
{

 FILE *fp;
 char ch;

 fp=fopen("test.txt","r");
 
 if(fp==NULL){
     printf("File error");
     exit(0);
 }

 ch = fgetc(fp);
  
 printf("%c",ch);
 fclose(fp);
 
 return 0;
}
