#include<stdio.h>
#include<string.h>

int main(int argc , char *argv[])
{
               FILE *fp;
               char line[100];

              fp = fopen(argv[2],"r");
   
             while(fscanf(fp , "%[^\n]\n" , line)!=EOF)
            {
                      if(strstr(line , argv[1]) !=NULL)
                     {

                             printf("%s\n" , line);
                      }
                     else
                    {
                            continue;
                    }
           }
            fclose(fp);
}
