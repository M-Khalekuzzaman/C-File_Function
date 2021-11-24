#include<stdio.h>
int main()
{
  FILE *file;
  file = fopen("DOC.txt","r");
   char ch;
  if(file == NULL)
    printf("File doesn't open successfully");

  else
  {
      printf("File is opened\n");

     while(!feof(file))
     {
         ch = fgetc(file);
         printf("%c",ch);
     }

      printf("File written successfully\n");
  }
  fclose(file);
  getch();
}



