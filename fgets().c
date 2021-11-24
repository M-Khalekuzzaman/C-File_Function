#include<stdio.h>
int main()
{
  FILE *file;
  file = fopen("DOC.txt","r");
  char ch[50];
  int age;
  if(file == NULL)
    printf("File doesn't open successfully");

  else
  {
      printf("File is opened");
      printf("\n");
      while(!feof(file)){
               fgets(ch,50,file);
               printf("%s",ch);
      }
      printf("File written successfully\n");
  }
  fclose(file);
  getch();
}



