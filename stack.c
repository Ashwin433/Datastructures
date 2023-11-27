#include<stdio.h>
#include<stdlib.h>
int i,ele,n,choice,stack[50],top=-1;
void display();
void pop();
void push();
void peek();
void menu();
int main()
{
   printf("\n enter the number of elements:");
   scanf("%d",&n);
   menu();
   return 0;
}
void menu()
{
   printf("\n1.pop \n2.push \n3.peek \n4.display \n5.display");
   printf("\n enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1: pop();
          break;
     case 2: push();
          break;
     case 3: peek();
           break;
     case 4: display();
           break;
     case 5: exit(1);
   }
}
void display()
{
 int i=0;
 if(top==-1)
   printf("\n stack empty");
 else
   {
     printf("\n the elements are:");
       for(i=top;i>=-1;i--)
        {
         printf("\t %d",stack[i]);
        }    
   }
   menu();
}
void push()
{
 if(top!=50)
  {
   top=top+1;
   printf("\n enter the elements:");
   scanf("%d",&ele);
   stack[top]=ele;
   printf("\n insertion sucessfull");
  }
 else
   printf("\n stack full");
menu();
}
void pop()
{
 if(top==-1)
  printf("\n stack empty");
 else
  { 
    ele=stack[top];
    printf("deleted:%d",ele);
    top=top-1;
  }
menu();
}
void peek()
{

 printf("the top most element of the stack is \t %d",stack[top]);
menu();
}
  

 
                  
