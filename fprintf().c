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
      int age;
      printf("Enter your name: ");
      gets(name);
      printf("Enter your age : ");
      scanf("%d",&age);
      fprintf(file,"%s \n %d\n",name,age);
      printf("File written successfully\n");
  }
  fclose(file);
  getch();
}


