#include<stdio.h>
int main() 
{
       int mark;
       char grade;
       print("\nEnter marks: ");
       scanf("%d",&mark);
       if (mark>85) 
          {grade="A";}
       else if (mark<=84 && mark>=70) 
           {grade="B";}
       else if (mark<=69 && mark>=55) 
           {grade="B";}
       else if (mark<=54 && mark>=40) 
           {grade="C";}
       else
           {grade="F";}
      printf ("Grade is: %c",grade);
      return 0;
}
