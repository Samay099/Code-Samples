#include<stdio.h>

struct Demo
{
   int no;
   char ch1 ;   //padding 3 bytes   
   float f;
   int i;
  
};

int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}

#include<stdio.h>

struct Demo
{
   int no;
   char ch1 ; 
   char ch2 ;   //padding 2 bytes
   float f;
   int i;
  
};

int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}

#include<stdio.h>

struct Demo
{
   int no;
   char ch1 ;   //padding 3 bytes 
   float f;
   char ch2 ;   //padding 3 bytes
   int i;
  
};

int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}