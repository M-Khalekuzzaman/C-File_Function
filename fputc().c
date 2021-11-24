#include<stdio.h>
int main()
{
  FILE *file;
  file = fopen("DOC.txt","w");

  if(file == NULL)
    printf("File doesn't open successfully");

  else
  {
      printf("File is opened\n");
      char name[50];
      printf("Enter your name: ");
      gets(name);
      int len =  strlen(name);
       for(int i = 0 ;i<len ; i++)
       {
           fputc(name[i],file);
       }
       printf("File written successfully\n");
  }
  fclose(file);
  getch();
}

